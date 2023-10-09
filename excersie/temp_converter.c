#include<stdio.h>

int main(){
    float C,F;

    printf("Temp in Celsius: ");
    scanf("%f",&C);

    F = 32+((C/5)*9);

    printf("Temp in Farhenheit: %f\n",F);

}