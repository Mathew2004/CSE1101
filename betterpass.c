#include<stdio.h>
#include <ctype.h>
#include<string.h>

int main(){
    int i;
    char A[100];

    scanf("%s",A);
    int size = strlen(A);

    for(i=0; i<=size; i++){
        A[0] = toupper(A[0]);

        if(A[i] == 's'){ 
            A[i] = '$';
        }
        else if(A[i] == 'i'){
            A[i] = '!';
        }
        else if(A[i] == 'o'){
            A[i] = '(';
            size++;
            int pos = i;
            for(int j=(size); j>(pos); j--){
                A[j] = A[j-1];

               
                
            }
             A[pos+1]=')';
            
        }

    }
    
      printf("%s",A);   
      printf(".\n");   
    

  
}
   


