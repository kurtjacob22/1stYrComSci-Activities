#include <iostream>

using namespace std;

int main(){

    // 00 01 02
    // 10 11 12
    // 20 21 22
    int n;
    cout << "Enter a number : ";
    cin >> n;

    //int rows = n, cols = n;

	for(int x = 0; x <= n; x++){
		for(int y = 0; y <= n; y++){
			cout << x << y << "\t";
		}
		cout << endl;
	}












    // int n, partial, result = 0;

    // cout << "Enter a number : ";
    // cin >> n;

    // for(int i = 1; i <= n; i++){
    //     partial = 1;
    //     for(int j = 0; j < i; j++){
    //         partial = partial * i;
    //     }
    //     result = result + partial;
    // }
    
    // cout << "The sum of the powers from 1 to " << n << " is: " << result;
}