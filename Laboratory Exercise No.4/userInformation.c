#include<stdio.h>

int main(){
    char name[100], address[100], course[100], section[100], gender;
    printf("\n\nEnter your INFORMATION....\n\n");

    printf("name: ");
    gets(name);

    printf("address: ");
    gets(address);

    printf("course: ");
    gets(course);

    printf("section: ");
    gets(section);

    printf("gender('M' or 'F'): ");
    scanf("%c" , &gender);

    printf("\n\nPlease Check your information...\n\n");
    printf("\tname: %s", name);
    printf("\n\taddress: %s", address);
    printf("\n\tcourse: %s", course);
    printf("\n\tsection: %s", section);
    printf("\n\tgender: %c", gender);

}