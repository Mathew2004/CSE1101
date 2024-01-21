#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    int i,l,count=0;
    scanf("%s",s);
    l = strlen(s);

    for(i=0;i<l/2;i++){
        if(s[i] != s[l-i-1]){
            count++;
        }
        
    }
    if((count==0 && l%2 != 0) || count==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

}