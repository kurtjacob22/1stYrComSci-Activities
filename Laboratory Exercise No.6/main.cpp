#include <iostream>

using namespace std;

int main(){

    int n, partial, result = 0;

    cout << "Enter a number : ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        partial = 1;
        for(int j = 0; j < i; j++){
            partial = partial * i;
        }
        result = result + partial;
    }
    
    cout << "The sum of the powers from 1 to " << n << " is: " << result;
}