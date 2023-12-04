#include<stdio.h>

int main(){
    int N,i,actual_sum=0,realSum=0;
    scanf("%d",&N);
    int num;
    for(i=1; i<N; i++){
        scanf("%d",&num);
        actual_sum += num;
    }
    for(i=1; i<=N; i++){
        realSum += i;
    }
    printf("%d\n",realSum-actual_sum);
}