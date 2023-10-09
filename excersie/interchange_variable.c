#include<stdio.h>

int main(){
    int A,B,C;

    scanf("%d %d",&A,&B);

    C = A;
    A = B;
    B = C;

    

    printf("A => %d\n",A);
    printf("B => %d",B);
}