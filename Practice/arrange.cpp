#include <iostream>
#include <cmath>

using namespace std;

int getAbsSum(int numbers[]){
    int sum = 0;
    for(int i = 0; i <= sizeof(numbers)/sizeof(numbers[0]); i++){
        sum = sum + abs(numbers[i]);
    }
	return sum;
}

int main(){

    int numbers[] = {5,4,-5,-9,10};
    cout << getAbsSum(numbers);

}