#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number: \n");
    scanf("%d",&num);

    if(num%5==0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}