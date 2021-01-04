#include <iostream>

using namespace std;

int main(){
    long long int n, past = 0, present = 1, future = 0; //initial values of first 3 terms

    cout << "Enter the length of the fibonacci : ";
    cin >> n;

    while(n <= 0){// to validate if user inputs negative number
        cout << "Enter a positive number : ";
        cin >> n;
    }

    cout << "(1) : "<< present << endl; //first term of the fibonacci 

    for(int i = 1; i < n; i++){

        future = past + present;
        past = present;
        present = future;

        cout << "(" << i + 1 << ") : " << future << endl; //2nd - nth term of the sequence
    }

}



