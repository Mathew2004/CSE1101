#include<stdio.h>
int main(){
    char s;
    printf("Enter a Character\n");
    scanf("%c",&s);

    if((s>=65 && s<=90) || (s>=97 && s<=122)){
        switch (s)
        {
        case 'A':
            
        case 'E':
            
        case 'I':
            
        case 'O':
            
        case 'U':
            
        case 'a':
            
        case 'e':
           
        case 'i':
           
        case 'o':
           
        case 'u':
            printf("Vowel\n");
            break;
        
        default:
            printf("Consonant\n");
            break;
        }
    }
    else if(s>=48 && s<=57){
        printf("Digit\n");
    }
    else if(s==32){
        printf("Space\n");
    }
    else{
        printf("Special Character\n");
    }
}