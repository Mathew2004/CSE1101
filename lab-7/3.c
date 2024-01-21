#include<stdio.h>
#include<math.h>
int main(){
    int n,dgt,sum=0;
    printf("3 Digit Number\n");
    scanf("%d",&n);
    int num = n;
    while(n){
        dgt = n%10;
        n /= 10;
        int p=1;
        for(int i=1; i<=3; i++){
            p *= dgt;
        } 
        
        sum += p; 
    }
    //printf("Sum %d\n",sum);
    if(sum==num) printf("Bahubali");
    else printf("Not");
}