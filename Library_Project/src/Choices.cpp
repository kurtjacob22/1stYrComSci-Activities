#include <iostream>
#include <windows.h>
#include <fstream>
#include <vector> 
#include <string>

#include "./BookObject.cpp"

using namespace std;

class Choices{

    int windowSize = getScreenSize();

    public:
        int getScreenSize(){
            CONSOLE_SCREEN_BUFFER_INFO csbi;
            int windowSize;

            GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
            windowSize = csbi.srWindow.Right - csbi.srWindow.Left - 2;
            // windowSize / 2 - to center string

            return windowSize;
        }

        void buffer(int bufferSize, string symbol){
            for(int j = 0; j<=bufferSize; j++){
                cout << symbol;
            }
        }

        void center(int bufferSize, string symbol, string text){// to have a more appealing interface
            for(int j = 0; j<=bufferSize - text.length() / 2; j++){
                cout << symbol;
            }

            cout << text;

            for(int j = 0; j<=bufferSize - text.length() / 2; j++){
                cout << symbol;
            }
            
            cout << endl;
        }




        void menuOptions(){
            vector<string> options = {
                "1. Add Book",
                "2. Search Book",
                "3. Delete Book Record",
                "4. Borrow Book",
                "5. Return Book",
                "6. View Record",
                "7. Exit"
            };
            cout << endl;
            center(windowSize/2, "-", "LIBRARY INVENTORY SYSTEM");
            cout << endl;
            for(string i : options){
                buffer(windowSize / 2.3, " ");
                cout << i << endl;
            }

        } 
    
        void addBook(){
            string nameBook, authorName, genre, isbn;
            int qty;
            
            system("cls");
            center(windowSize/2, "-", "Add Book");
            cout << endl;
            buffer(windowSize / 3, " ");
            cout << "Enter Name of the Book: ";
            getline(cin, nameBook);
            buffer(windowSize / 3, " ");
            cout << "Enter the ISBN of the Book: ";
            getline(cin, isbn);
            buffer(windowSize / 3, " ");
            cout << "Enter Name of the Author: ";
            getline(cin, authorName);
            buffer(windowSize / 3, " ");
            cout << "Enter the Genre: ";
            getline(cin, genre);
            buffer(windowSize / 3, " ");
            cout << "Enter the Quantity: ";
            cin >> qty;

            Book createBook;
            createBook.set_values(nameBook, isbn, qty, authorName, genre);

            fstream file("./Database/" + nameBook + ".bin", ios::binary | ios::in | ios::out | ios::trunc);
            if(!file.is_open()){
                cout << "error occured while opening the file";
            }else{
                file.write((char *) &createBook, sizeof(Book));
            }

            fstream writeBookName("./Database/listofbooks.txt", ios::in | ios::out | ios::app);
            // getline(writeBookName, nameBook);
            if(!writeBookName.is_open()){
                cout << "error occured while opening the file2";
            }else{
                writeBookName << nameBook << endl;
            }

            backToMenu();
        }

        void backToMenu(){
            string bcktoMenu;
            cout << endl;
            buffer(windowSize / 3, " ");
            cout << "Enter B to transact again, Any key to exit: ";
            cin >> bcktoMenu;
            if(bcktoMenu == "B" || bcktoMenu == "b"){
                menu();
            }else{
                system("exit");
            }
            
        }

        void searchBook(){
            string nameSearch, input;
            vector<string> details;
            cout << "Enter the name of a book: ";
            cin >> nameSearch;

            fstream file("././Database/listofbooks.txt", ios::in | ios::out);
            while(getline(file, input)){
                details.push_back(input);
            }

            for(string i : details){
                if(nameSearch == i){
                    cout << i;
                    cout << "found";
                }
            }
        }

        void menu(){
            system("cls");
            // system("color 70");
            

            
            int pickMenu;
            do{
                system("cls");
                menuOptions();//displays the menu's

                cout << endl;
                buffer(windowSize / 2.3, " ");
                cout << "Pick a Number: ";
                cin >> pickMenu;

            }while(pickMenu > 7 || pickMenu < 1);

            bool flag = true;
            while(flag){
                if(pickMenu = 1){
                    addBook();
                    flag = false;
                }
            }
        }

};