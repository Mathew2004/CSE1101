#include<stdio.h>
int main(){
    int a,b,c,d,min;
    printf("Enter CT Marks\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    min=a;
    if(min>b)
        min=b;
    if(min>c)
        min=c;
    if(min>d)
        min=d;
    int total = (a+b+c+d)-min;
    float avg = (float)total/3;
    printf("Avg Of CT marks : %.2f",avg);

}