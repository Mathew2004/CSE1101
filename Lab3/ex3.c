#include<stdio.h>

int main(){
    int x,n;
    double res=1;
    scanf("%d %d",&x,&n);
    
    for(int i=1; i<=n; i++){
        res *= x;
        }
    
    if(n==0)   res =1;
    else if(n>0) printf("%lf",res);
    else printf("%lf",1/res);
    
  
}