// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    switch (n){
        case 80 ... 90: printf("A+");
        break;
        
        case 70 ... 79: printf("A");
        break;
        case 60 ... 69: printf("A-");
        break;
        case 50 ... 59: printf("B");
        break;
        case 40 ... 49: printf("C");
        break;
        case 33 ... 39: printf("D");
        break;
        case 0 ... 32: printf("F");
        break;
        
        default: printf("???");
        break;
            
    }
}