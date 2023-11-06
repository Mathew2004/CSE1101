#include<stdio.h>
int main(){
    int n,i,num,min;
    printf("How many numbers? \n");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        scanf("%d",&num);
        if(i==1){
            min = num;
        }
        
        if(num<min){
            min = num;
        }

    }
    printf("Minmum: %d",min);
}