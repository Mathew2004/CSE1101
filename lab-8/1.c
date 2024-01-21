#include<stdio.h>

int area(int n1, int n2){
    int res = n1*n2;
    int pera = 2*(n1+n2);
    printf("Area is => %d\n",res);
    printf("Perameter is => %d\n",pera);
}


int main(){
    int b,h;
    scanf("%d %d",&b,&h);
    area(b,h);
}