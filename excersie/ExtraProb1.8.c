#include<stdio.h>

int main(){
    int Num,fdigit,ldigit;

    printf("Enter a 7 Digit Number: ");
    scanf("%d",&Num);

    fdigit = Num/1000000;
    ldigit = Num%10;

    printf("First Digit %d\n",fdigit);
    printf("Last Digit %d",ldigit);
    


}