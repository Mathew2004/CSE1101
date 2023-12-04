#include<stdio.h>

int main(){
    int N,i;
    printf("How many Students? \n");
    scanf("%d",&N);
    int arr[N],sum=0;

    for(i=0; i<N; i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("Average CT marks \n %.3f",(float) sum/N);
}