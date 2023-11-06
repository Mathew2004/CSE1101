#include<stdio.h>
int main(){
    int a,b;
    char opr;
    printf("Enter 2 Numbers: \n");
    scanf("%d %d",&a,&b);
    printf("Operation to be performed: \n");
    scanf(" %c",&opr);

    switch (opr)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d\n",a*b);
        break;
    case '/':
        printf("%d",a/b);
        break;
    
    default:
        printf("E Kemon Operation :/\n");
        break;
    }
}