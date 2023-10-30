#include<stdio.h>
int main(){
    int a,b,min;
    printf("Enter a & b: \n");
    scanf("%d %d",&a,&b);
    min = a>b?b:a;
    printf("%d\n",min);
}