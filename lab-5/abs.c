#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char c = 'A';
    for(int line=1; line<=n; line++){
        
        for(int spc=1; spc<=(line-1); spc++) printf("  ");
        for(int star=n; star>=line; star--){
            printf("* ");
            
            }
        for(int star=n; star>=line; star--){
            printf("* ");
           
            }
        printf("\n");
    }
}