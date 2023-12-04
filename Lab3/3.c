#include<stdio.h>

int main(){
    int l,u,i;
    long long sum=0;
    printf("Lower Range: ");
    scanf("%d",&l);
    printf("Upper Range: ");
    scanf("%d",&u);

    if(l%3==0)
            l=l;
    else if(l%3 == 1)
        l += 2;
    else 
        l += 1;

    for(i=l; i<=u; i+=3){
       
            sum += i;
            
    }
    printf("Sum is : %lld",sum);

}