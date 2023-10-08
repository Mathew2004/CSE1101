#include<stdio.h>
int main(){
int integerNumber;
float floatNumber;
long longInteger;
char character;
// For Integer Number
printf("\nEnter an integer: ");
scanf("%d",&integerNumber);
// For Floating Point
printf("\nEnter a floating point number: ");
scanf("%f",&floatNumber);
// For Long Integer
printf("\nEnter a long number: ");
scanf("%ld",&longInteger);
// For Character
printf("\nEnter a character: ");
scanf(" %c",&character);
// Display All:
printf("\n your integer is %d ", integerNumber);
printf("\n your floating point number is %f ", floatNumber);
printf("\n your long number is %ld ", longInteger);
printf("\n your character is %c ", character);
return 0;
}