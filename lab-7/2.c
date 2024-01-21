#include<stdio.h>

int main(){
    int l,n;
    printf("How many Lines? \n");
    scanf("%d",&l);

    for(int i=1; i<=l; i++){
        printf("Line#%d How many Numbers: ",i);
        scanf("%d",&n);
        int num;
        int evn=0,odd=0,pos=0,neg=0;
        while(n--){
            scanf("%d",&num);
            if(num>1) pos++;
            else if(num<1) neg++;
            if(num%2==0) evn++;
            if(num%2) odd++;
        }
        printf("#Even: %d\n",evn);
        printf("#Odd: %d\n",odd);
        printf("#Positive: %d\n",pos);
        printf("#Negative: %d\n",neg);
    }
}