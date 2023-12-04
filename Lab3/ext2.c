#include<stdio.h>

int main(){
    int n,i,j,spc;
    char a='A';

    printf("How many Lines? \n");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(spc=1; spc<=(n-i); spc++)
            printf(" ");
        for(j=1; j<=i; j++){
            printf("%c ",a);
            if(a=='Z')
                a = 'A';
            else   
                a++;

        
        }
        printf("\n");
    }



}