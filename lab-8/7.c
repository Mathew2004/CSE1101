#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int rem = n%10;
    n = n/10;
    while(n){
        rem = rem*10 + n%10;
        n = n/10;
    }
    printf("%d",rem);
}