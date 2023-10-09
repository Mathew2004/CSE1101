#include<stdio.h>

int main(){
    int sec,h,m,s;

    printf("Enter Second: ");
    scanf("%d",&sec);

    h = sec/3600;
    m = (sec/60)-(h*60);
    s = sec-(m*60)-(h*3600);

    printf("Hours: %d\n",h);
    printf("Minutes: %d\n",m);
    printf("Seconds: %d\n",s);


    

}