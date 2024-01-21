#include<stdio.h>
#include<string.h>

int main(){
     char s[100];
     int cCount=0,lCount=0,vCount=0,dCount=0,scCount=0,smCount=0,cpCount=0,conCount=0,spaceCount=0;
     fgets(s,100,stdin);
    int l =0;

    //Counting Length of the String

    while(s[l] != '\n'){
        l++;
    }
    

     for(int i=0; i<l; i++ ){
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i]>='a' && s[i]<='z')){
            lCount += 1;

            //Capital Small COunt
               if(s[i]>='a' && s[i]<='z'){
                    smCount += 1;
                }
                else{
                    cpCount += 1;
                }

            //Vowels Consonanats COunt
            switch (s[i])
            {
            case 'A': 
            case 'a': 
            case 'E': 
            case 'e': 
            case 'I': 
            case 'i': 
            case 'O': 
            case 'o': 
            case 'U': 
            case 'u': 
                    vCount += 1;
                    break;
                
            default:
                conCount += 1;
            }



        }
     
        else if(s[i]>='0' && s[i]<='9'){
            dCount += 1;
        }
        else if(s[i] == ' '){
            spaceCount += 1;
        }
        else{
            scCount += 1;
            
        }
     }


     printf("No of Characters : %d\n",l);
     printf("No of Letter : %d\n",lCount);
     printf("No of Digits : %d\n",dCount);
     printf("No of Capital Letters : %d\n",cpCount);
     printf("No of Small Letters : %d\n",smCount);
     printf("No of Spaces : %d\n",spaceCount);
     printf("No of Vowels : %d\n",vCount);
     printf("No of Consonants : %d\n",conCount);
     printf("No of spcial character : %d\n",scCount);
}