#include<stdio.h>

int main(){
    int days,month,remain_days;

    printf("No of Days: ");
    scanf("%d",&days);

    month = days/30;
    remain_days = days-(month*30);
    printf("Month: %d\n",month);
    printf("Days: %d\n",remain_days);
    

/**
    if(month%30 == 0){
        printf("Months : %d\n",month);
    }else{
        printf("Months: %d\n",month);
        printf("Days: %d\n", month%30);
    }

**/
}