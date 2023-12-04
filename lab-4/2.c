#include<stdio.h>

int main(){
    int n,i,num,count =0;
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        scanf("%d",&num);
        if(num%2)
            count += 1;
    }
    printf("No of Odd Num is : %d\n",count);
}