#include<stdio.h>
#include<math.h>
int main(){
    int n,dgt,sum=0;
    printf("An Integer Number\n");
    scanf("%d",&n);
    int num = n;
//Total Digits COunt
    int td=0;
    while(n){
        dgt =n%10;
        n/=10;
        td++;
    }

int acNum = num;
    while(num){
        dgt = num%10;
        num /= 10;
        int p=1;
        for(int i=1; i<=td; i++){   
            p *= dgt; 
        } 
        if(dgt==0) p==0;
      //  printf("p %d\n",p);
        sum += p; 
    }
    if(sum==acNum) printf("Bahubali");
    else printf("Not");
}