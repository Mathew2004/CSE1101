#include<stdio.h>

int main(){
    int n,num,i,count=0;
    scanf("%d",&n);
    

    for(num=2; ; num++){
        int check = 1;
        for(i=2; i<num; i++){
            if(num%i == 0){
                check = 0;
                break;
            }    
        }
        if(check==1){
            printf("%d ",num);
            count++;
        }
        if(count==n)
            break;
       
    }
   
}