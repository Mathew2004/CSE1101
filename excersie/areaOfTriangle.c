#include<stdio.h>

int main(){
    double base,height,area;

    printf("Enter a Base: ");
    scanf("%lf",&base);
    printf("Enter a height: ");
    scanf("%lf",&height);

    area = .5*(base*height);

    printf("Area of a Triangle: %lf",area);

    
}