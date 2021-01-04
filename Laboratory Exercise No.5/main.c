#include <stdio.h>

// age<0 "Invalid age"
// 1-17 "Valid age but not a voter"
// 18-100 "Voter"
// 101 above "Over age"

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d" , &age);

    if(age > 0){
        if(age <= 100){
            if(age <= 17 && age >= 1){
                printf("Valid age but not a voter");
            }else{
                printf("Voter");
            }
        }else{
            printf("Over age");
        }
    }else{
        printf("Invalid age");
    }

}

// int main()
// {
// 	int age;
// 	printf("Enter the age of the person: ");
// 	scanf("%d",&age);

// 	    if(age > 100){
//             printf ("Over age");
//         }else{
//             if(age < 0){
//                 printf ("Invalid age");
//             }else if(age <= 17 && age >= 1){
//                 printf ("Valid age but not a voter");
//             }else if(age >= 18 && age <= 100){
//                 printf("Voter");
//             }
//         }

// return 0;
// }