#include<stdio.h>
#include<string.h>


int main(){
    char s[100];
    int ilen=0,flen=0;
  
    scanf("%s",s);    

//Counting Length of Int and Float
    for(int i=0; i<strlen(s); i++){    
        if(s[i] == '.'){
            ilen = i;
            break;
        }
    }

    flen  = strlen(s)-ilen-1;
    char inum[ilen],fnum[flen];

    for(int i=0; i<ilen; i++){
        inum[i] = s[i];
    }
    for(int i=ilen+1; i<strlen(s); i++){
        fnum[i] = s[i];
        
    }

    int flag = 0; // Asume it is Int

    for(int i=ilen+1; i<strlen(s); i++){
      //  printf("%c\n",s[i]);
        if(s[i] == '0'){
            flag = 1;
        }else flag= 0;
        
    }
    if(flag==0) printf("float: ");
    else printf("Int: ");

    for(int i=0; i<ilen; i++){
        printf("%c",inum[i]);
    } 
    
    if(flag == 0){
        printf(" 0.");
        for(int i=ilen+1; i<strlen(s); i++) {
            printf("%c",s[i]);
            }
    }
    

    
}