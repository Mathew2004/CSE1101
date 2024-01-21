#include<stdio.h>
#include<math.h>

int main(){
    int t,sum=0;
   
    scanf("%d",&t);
    int add[100];

    for(int i=0; i<t; i++)
    {
        int p,q;
        scanf("%d %d",&p,&q);
        if(p==1){
            sum += pow(2,q);
            add[i] = pow(2,q);
        }
        else if(p==2){
            
        }
    }
    
}