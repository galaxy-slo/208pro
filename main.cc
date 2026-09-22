#include <iostream>
#include <string>
#include <fstream> 
#include "Book.h"

using namespace std;



int main(){

    Book Books[100];
    int counter = 0;
    string title;
    string author;
    string year;
    string ws;

    ifstream BookInput;
    BookInput.open("Books.txt");

    while(getline(BookInput, title, ',')){
        
        getline(BookInput, author, ',');
        BookInput.ignore(1);
        getline(BookInput, year);
        
        
        Books[counter].SetTitle(title);
        Books[counter].SetAuthor(author);
        Books[counter].SetYear(year);

        counter++;


    }



    while(counter > 0){
        counter--;
        Books[counter].PrintBooks();
        
    }




return 0;



}