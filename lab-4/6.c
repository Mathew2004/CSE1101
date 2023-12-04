#include<stdio.h>

int main(){
    int N,i,digits,sum=0,x;
    scanf("%d",&N);

    while(1){
        digits = N%10;
        N = N/10; 
        sum += digits;  

        if(N==0){
            if(sum>9){
                N = sum;
                sum = 0;
            }
            else break;
        }
    
        

    }
    
    printf("Sum %d\n",sum);
 
    
    
    

}