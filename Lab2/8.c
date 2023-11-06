#include<stdio.h>
int main(){
    char s;
    printf("Enter a Character \n");
    scanf("%c",&s);

    if(s>=65 && s<=90){
        printf("Capital Leter\n");
    }
    else if(s>=97 && s<=122){
        printf("Small Letter\n");
    }
    else if(s>=48 && s<=57){
        printf("Digit\n");
    }
    else{
        printf("Special Character\n");
    }
}