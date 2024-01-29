// Evan123 - D
#include<bits/stdc++.h>
using namespace std;

int SumOfArray(int arr[], int st, int l){
    if(st>=l)
        return 0;
    else{
        return arr[st] + SumOfArray(arr,st+1,l) ;
    }
}


int main(){
    int t;
    //int *p;
    cin >> t;
    int i = 1;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        cout << "Case "<<(i)<<": "<< SumOfArray(arr,0,n) << endl;
        i++;

    }
    
/*
    p = &arr[0];
 
    int sum=0;
    for(int i=0; i<t; i++){
        sum += *p;
        p++;
    }
    
    cout << sum <<endl;
    */
    
   
    
    
}



