#include<stdio.h>

int main(){
    int n,i,f1,f2,f3,count=0;
    scanf("%d",&n);
    int arr[n];
    f1 = 0;
    f2 = 1;
    f3 = f1+f2;

    for(i=2; i<=n ; i++){
        
        int t = f1;
        f1 = f3;
        f2 = t;
        f3 = f1+f2;
        
        
        
    }
    printf("%d Terms of Fibbonacci Sequence is \n %d ",n,f1);




}