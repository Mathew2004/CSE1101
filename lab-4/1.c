#include<stdio.h>

int main(){
    int n,i;
    char ch='A';
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(int spc=1; spc<=(n-i); spc++ ){
            printf("  ");
        }
        for(int j=65 ;j<=(64+i); j++){
            printf("%c ",j); 
           
        }
        for(int k=(64+i)-1; k>=65; k-- ){
            printf("%c ",k);
        }
        

        printf("\n");
    }
    

}