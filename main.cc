#include <iostream>
#include <string>
#include <fstream> 
#include "Book.h"

using namespace std;



int main(){

    Book Books[100];
    int counter = 0;
    string line;

    ifstream BookInput;
    BookInput.open("Books.txt");

    while(getline(BookInput, line)){
        string title;
        string author;
        string year;

        getline(BookInput, title, ',');
        getline(BookInput, author, ',');
        getline(BookInput, year);
        
        
        
        
        Books[counter].SetTitle(title);
        Books[counter].SetAuthor(author);
        Books[counter].SetYear(year);

        counter++;





    }



    while(counter >= 0){
        Books[counter].PrintBooks();
        counter--;
    }




return 0;



}