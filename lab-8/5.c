#include<stdio.h>
#include<math.h>

int max(int a,int b){
    if(a>b) return a;
    else return b;
}

int higest(int p,int q,int r, int s){
    int m1 = max(p,q);
    int m2 = max(r,s);

    int maxium = (m1>m2)?m1:m2;
    printf("Max age: %d",maxium) ; 
    
}

int main(){
    int arr[4];
    for(int i=0; i<4; i++) scanf("%d",&arr[i]);
    higest(arr[0],arr[1],arr[2],arr[3]);
}