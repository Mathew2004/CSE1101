#include<stdio.h>

int main(){
    int s,l,w,h,i,max,vol,higest;
    scanf("%d",&s);

    scanf("%d %d %d",&l,&w,&h);
    max = l*h*w;
    for(i=2; i<=s; i++){
        scanf("%d %d %d",&l,&w,&h);
        vol = l*w*h;
        if(vol>max){
            max = vol;
            higest = i;
        }
    }
    printf("The SOlid With Higest Volume : %d\n",higest);
    printf("The Volume : %d",max);
}