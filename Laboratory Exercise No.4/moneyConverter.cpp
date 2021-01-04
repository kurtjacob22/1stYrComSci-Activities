#include<iostream>

using namespace std;

int main(){
    double dollarInput, pesoConverted;
    double rate = 47.90;

    cout << "\n\nConvert Dollars to Peso\n";
    cout << "The dollar to peso rate is " << rate <<"Php \n\n";
    cout << "Please enter amount in dollars : $";
    cin >> dollarInput;

    pesoConverted = dollarInput * rate;

    cout << "\nThe Peso Equivalent is " << pesoConverted << "PHP";
}