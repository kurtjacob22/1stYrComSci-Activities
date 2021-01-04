#include<stdio.h>

int main(){
    char employeeName[100];
    int workHrs, payRate, salary;

    printf("Enter Employee name: ");
    gets(employeeName);

    printf("Enter your pay rate: ");
    scanf("%d", &payRate);

    printf("Enter work hours: ");
    scanf("%d", &workHrs);

    salary = payRate * workHrs;

    printf("\nHello! ");
    puts(employeeName);
    printf("Your salary is: %d", salary);

    return 0;
}