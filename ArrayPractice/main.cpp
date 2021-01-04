#include <iostream>

using namespace std;

int main(){

    int accounts[5][5];

    int rows =  sizeof(accounts)/sizeof(accounts[0]); // *100 / 20
    int cols = sizeof(accounts)/(sizeof(int)*rows); // *100 / (4*rows)  

    // cout << rows << " " << cols;
    int j = 0, i = 0;
    for(i; i <= rows; i++){
        for(j; j <= cols; j++){
            cout << "Enter username: " << endl;
            cin >> accounts[i][j];
            cout << "Enter password: " << endl;
            cin >> accounts[i][j];
        }
    }

    for(int i = 0; i <= rows; i++){
        for(int j = 0; j <= cols; j++){
            cout << accounts[i][j] << endl;
        }
    }

}