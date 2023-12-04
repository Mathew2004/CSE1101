#include<stdio.h>

int main(){
    int n,i,f1,f2,f3,count=0,t;
    scanf("%d",&n);
    int arr[n];
    f1 = 0;
    f2 = 1;
    f3 = f1+f2;

    for(i=2; ;i++){
        if(f1>n)
            break;

        t = f1;
        arr[i] = f1+f2;
        f1 = arr[i];
        f2 = t;
        printf("%d\n",arr[i]);
        
    }

  

}