#include <stdio.h>

int main() {

    int n, temp, largest, smallest;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter (%d) numbers: ", n);
    scanf("%d", &temp);
    n -= 1;

    largest = temp;
    smallest = temp;

    for(int i = n; i > 0; i--){
        printf("\nEnter number (%d): ", i);
        scanf("%d", &temp);
        if (temp <= smallest){
            smallest = temp;
        } else if (temp >= largest){
            largest = temp;
        }
    }

    printf("\n");
    printf("Largest: %d", largest);
    printf("\n");
    printf("Smallest: %d", smallest);
    printf("\n");

    // printf("%d" , n);
    n += 1;
    if((largest % n) == 0){
        printf("Largest is divisible by %d", n);
        printf("\n");
    }else{
        printf("Largest is not divisible by %d", n);
        printf("\n");
    }
    

    if(smallest < n + 1){
        printf("Smallest is not divisible by %d", n); 
    }else{

        if((smallest % n - 1) == 0){
            printf("Smallest is divisible by %d", n);
        }else{
            printf("Smallest is not divisible by %d", n);
        }
    }

    

}