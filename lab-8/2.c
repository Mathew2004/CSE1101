#include<stdio.h>

int diff(int n1,int n2){
    if(n1>n2) return n1-n2;
    else return n2-n1;
    
}

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",diff(x,y));
}