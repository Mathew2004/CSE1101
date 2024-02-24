<?php
include "../components/connect.php";

header("Access-Control-Allow-Origin: *");
header("Access-Control-Allow-Methods: POST");

$tranId = json_decode(file_get_contents('php://input'))->tran_id;
$api = 'https://shop.aparsclassroom.com/query/transaction';

$options = [
    'http' => [
        'header'  => 'Content-type: application/json',
        'method'  => 'POST',
        'content' => json_encode(['tran_id' => $tranId]),
    ],
];

$context  = stream_context_create($options);
$response = @file_get_contents($api, false, $context);

if ($response === FALSE) {
    // Handle error, return a JSON response indicating failure
    echo json_encode(['result' => 'Error occurred while fetching data']);
} else {
    // Attempt to decode the response
    $data = json_decode($response, true);

    if ($data === null && json_last_error() !== JSON_ERROR_NONE) {
        // Handle invalid JSON response from the server
        echo json_encode(['result' => 'Error: Invalid JSON response']);
    } else {
        $result = 'Invalid';

        if (isset($data['status']) && $data['status'] == 200) {
            // Check if the key 'status' exists before accessing it
            $result = $data['tranx']['status'] . ' - ' . $data['tranx']['Product']['productId'];
            setcookie('tran_id', $data['tranx']['tran_id'], time() + 60*60*24*30, '/');
            setcookie('name', $data['tranx']['Name'], time() + 60*60*24*30, '/');
            setcookie('email', $data['tranx']['Email'], time() + 60*60*24*30, '/');
            setcookie('phone', $data['tranx']['Phone'], time() + 60*60*24*30, '/');
            setcookie('clg', $data['tranx']['Institution'], time() + 60*60*24*30, '/');
            setcookie('batch', $data['tranx']['HSC'], time() + 60*60*24*30, '/');

            $verify = $conn->prepare("SELECT * FROM `note_users` WHERE trans_id = ? ");
            $verify->execute([$data['tranx']['tran_id']]);

            if($verify->rowCount() == 0){
                    $add = $conn->prepare("INSERT INTO `note_users`(name, email, phone,batch,trans_id) VALUES(?,?,?,?,?)");
                    $add->execute([$data['tranx']['Name'], $data['tranx']['Email'],$data['tranx']['Phone'],$data['tranx']['HSC'],$data['tranx']['tran_id']]);
            }
        }

        echo json_encode(['result' => $result]);
    }
}

?>
