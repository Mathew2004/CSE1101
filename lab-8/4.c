#include<stdio.h>


long long factorial(int nf){
    long long nfac = 1;
    for(int i=nf; i>=1; i--){
        nfac *= i;
    }

    return nfac;

}

int main(){
    int n,r;
    scanf("%d %d",&n,&r);

    long long p = factorial(n)/factorial(n-r);
    long long c = factorial(n)/(factorial(n-r)*factorial(r));

    printf("%dP%d = %d\n",n,r,p);
    printf("%dC%d = %d\n",n,r,c);



}