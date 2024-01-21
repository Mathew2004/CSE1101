#include<stdio.h>

int main(){
    int n,r;
    scanf("%d %d",&n,&r);
    long long p = 1;
    for(int i=n; i>(n-r); i-- ){
        p *= i;
    }
    printf("%lld",p);
}