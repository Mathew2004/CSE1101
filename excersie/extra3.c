#include<stdio.h>

int main(){
    int num,digit,NewNum,add;

    printf("Enter a Number: ");
    scanf("%d",&num);

    printf("Enter a Digit: ");
    scanf("%d",&digit);

    add = (num*10+digit);
    NewNum= add*10;

   
    printf("New Number: %d",NewNum);
}