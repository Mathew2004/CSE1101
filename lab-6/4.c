#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s", s);
    int check = 1; //Asume It is Palindram
    for(int i=0; i<strlen(s); i++){
        if(s[i]!=s[strlen(s)-i-1]){
            check = 0; //Not Palindram
            break;
        }

    }
    if(check==1){
        printf("Palindrome");
    }
    else 
        printf("Not Palindrome \n");
}