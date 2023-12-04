#include<stdio.h>

int main(){
    int n,i;
    printf("Number of ELement: ");
    scanf("%d",&n);
    int arr[n];

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(i=n-1; i>= 0 ; i--){
        printf("Element[%d] = %d\n",i+1,arr[i]);
    }

}