#include<stdio.h>

int main(){

    int num1, num2, sum;

    printf("\nA Program that Calculates the Sum of two input numbers.");
    
    printf("\n\nInput first number: ");
    scanf("%d" , &num1);

    printf("\nInput second number: ");
    scanf("%d" , &num2);

    sum = num1 + num2;

    printf("\n\tThe sum of %d and %d is %d", num1, num2, sum);


}