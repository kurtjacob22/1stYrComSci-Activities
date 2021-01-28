#include <iostream>
#include <fstream>
 
using namespace std;

struct Book{

    string bookName;
    string author;
    string bookGenre;
    string isbn;
    int quantity;
    int bookMaxCount = quantity;
    int borrower[];
    
    public:
        // void set_values(string, string, int, string, string);

        Book(){
            bookName = "no name";
            quantity == 0;
            author = "";
            bookGenre = "";
            isbn = "";
        }

        Book(string bookName, string isbn, int quantity, string author, string bookGenre){
            this -> bookName = bookName;
            this -> isbn = isbn;
            this -> quantity = quantity;
            this -> author = author;
            this -> bookGenre = bookGenre;
        }


        string getBookName(){
            return bookName;
        }

        int getBookQuantity(){
            if(quantity == 0){
                cout << "BOOK NOT AVAILABLE";
            }else{
                return quantity;
            }
            
        }

        string getId(){
            return isbn;
        }

        void borrowBook(){
            if(quantity != 0){
                quantity -= 1;
            }
        }

        void returnBook(){
            if(quantity != bookMaxCount){
                quantity += 1;
            }
        }

        void ifNotAvailable(){
            if(quantity == 0){
                system("color 74");
            }else{
                system("color 70");
            }
        }





        // !READING AND WRITING FILES


};

// void Book::set_values(string book, string ref, int bookCount, string authorName, string genre){
//     bookName = book;
//     isbn = ref;
//     quantity = bookCount;
//     author = authorName;
//     bookGenre = genre;
// }