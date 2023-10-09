#include<stdio.h>

int main(){
    double d,t;

    printf("Enter Dollar Amount: ");
    scanf("%lf",&d);

    t = d*103;

    printf("In Taka => %lf",t);

    return 0;
}