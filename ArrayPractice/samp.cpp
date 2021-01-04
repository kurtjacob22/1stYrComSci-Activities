#include <iostream>
#include <cmath>

using namespace std;

// int getAbsSum(int arr[]){
//     int sum = 0;

//     for(){

//     }
// }

int main(){

    int numbers[] = {5,4,-5,-9,10};
    // getAbsSum(numbers);
    int sum = 0;
    for(int i = 0; i <= 5; i++){
        sum = sum + abs(numbers[i]);
    }

}