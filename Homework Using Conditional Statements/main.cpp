#include <iostream>

using namespace std;

int main() {

    int result = 1;
    int input;
    cout << "Enter a number: ";
    cin >> input;


    for(int i = 1; i <= input; i++){
        result = result * i;
    }

    cout << result;

}


































// int main(){
//     double temp;
//     cout << "insert temperature : ";
//     cin >> temp;

//     if(cin.fail()){
//         cout << "Enter a valid number";
//     }else{
//         if(temp < 0){
//             cout << "ICE";
//         }else if(temp >= 0 && temp <= 100){
//             cout << "WATER";
//         }else{
//             cout << "TEMP";
//         }
//     }
// }





























// int main(){
//     char let;
//     cout << "Enter a letter: ";
//     cin >> let;

//     if(let >= 'a' && let <= 'z' || let >= 'A' && let <= 'Z'){
//         if(let != 'A' && let != 'E' && let != 'I'  && let != 'O'  && let != 'U' 
//         && let != 'a' && let != 'e' && let != 'i'  && let != 'o'  && let != 'u'){
//             cout << "The letter is a consonant";
//         }else{
//             cout << "The letter is a vowel";
//         }
//     }else{
//         cout << "Please enter valid character.";
//     }

    
// }







