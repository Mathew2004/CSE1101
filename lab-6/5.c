#include<stdio.h>
#include<string.h>

int main(){
    char num[25];
    int count[10] = {0,0,0,0,0,0,0,0,0,0};
    scanf("%s",num);
    
    for(int i=0; i<strlen(num); i++){

        switch (num[i])
        {
        case '0': count[0] += 1;
            
            break;
        case '1': count[1] += 1;
            break;
        case '2': count[2] += 1;            
            break;
        case '3': count[3] += 1;
            break;
        case '4': count[4] += 1;
            break;
        case '5': count[5] += 1;
            break;
        case '6': count[6] += 1;
            break;
        case '7': count[7] += 1;
            break;
        case '8': count[8] += 1;
            break;
        case '9': count[9] += 1;    
            break;
        
        default:
            break;
        }
    }

    for(int i=0; i<=9; i++){
        printf("%d => %d \n",i,count[i]);
    }
}