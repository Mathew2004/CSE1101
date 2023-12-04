#include<stdio.h>

int main(){
    int e,i;
    printf("How many Element? \n");
    scanf("%d",&e);
    int arr[e],p;

    for(i=0; i<e; i++)
        scanf("%d",&arr[i]);
    printf("Element want to search ? \n");

    scanf("%d",&p);
    int check =0; // 0 means Position is Exist

    for(i=0; i<e; i++){
        
        if(arr[i] == p){
            printf("## %d is Found At %d \n",p,i+1);
            check = 0;
            break;
        }
        else{
            check=1; // 1 meaans Position DOsen't Exist
           
        }
    }
    if(check==1) 
        printf("## %d is Not FOund\n",p);
    

}