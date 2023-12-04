#include<stdio.h>

int main(){
    int n;
    printf("Size? \n");
    scanf("%d",&n);

    int arr[n];
    scanf("%d",&arr[0]);
    int max = arr[0];
    for(int i=1; i<n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("Largest Number of this Element \n %d",max);
}