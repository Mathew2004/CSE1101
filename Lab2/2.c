#include<stdio.h>
int main(){
    int a,b,c,d,max;
    printf("Enter 4 Numbers: \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    max=a;
    if(max<b)
        max=b;
    if(max<c)
        max=c;
    if(max<d)
        max=d;
    printf("Max Num is: %d",max);
    
}