#include<stdio.h>

int main(){
    int low,upper,i,sum=0,count=0;
    printf("Lower Range: ");
    scanf("%d",&low);

    printf("Upper Range: ");
    scanf("%d",&upper);

    for(i=low; i<=upper; i++){
        
        for(int j=1; j<i; j++){
            if(i%j==0){
                sum += j;
                
            }   
        }

        if(sum==i)
            count += 1;
        sum =0;

    }
    printf("No of Perfects Number: %d",count);
}