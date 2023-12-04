#include<stdio.h>

int main(){
    int n,i;
    printf("Number of element? \n");
    scanf("%d",&n);
    int arr[n],count=0;
    
    printf("Enter %d Elements ",n);
    
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2)
            count += 1;
    }
    printf("Number of Odd Element \n %d",count);
}