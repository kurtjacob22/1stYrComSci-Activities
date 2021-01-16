#include <windows.h>
#include <iostream>

using namespace std;


void buffer(int bufferSize, string symbol, string text){// to have a more appealing interface
    for(int j = 0; j<=bufferSize - text.length() / 2; j++){
        cout << symbol;
    }

    cout << text;

    for(int j = 0; j<=bufferSize - text.length() / 2; j++){
        cout << symbol;
    }
    
    cout << endl;
}

int main(int argc, char *argv[]) 
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns, rows;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns = csbi.srWindow.Right - csbi.srWindow.Left - 1;

    buffer(columns/2, "-", "KURT JACOB URQUICO");
    // cout << "Columns: " << columns;
    // buffer(columns/2 - 6, "-");

    return 0;
}