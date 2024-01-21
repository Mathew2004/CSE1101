#include<stdio.h>

float power(int b,int p){
    
    if(p>0){
        long long  res=1;
        for(int i=1; i<=p; i++) {
           res *= b; 
        }
        printf("Ans => %ld\n",res);
    }  
    else{
        float fres = 1;
        for(int i=p; i<0; i++) {
           fres /= b; 
        }
        printf("Ans => %.5f\n",fres);
    } 
}

int main(){
    int x,n;
    scanf("%d %d",&x,&n);
    power(x,n);

}