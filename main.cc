#include <iostream>
#include <string>
#include <fstream> 
#include "Book.h"
using namespace std;



int main(){

    Book Books[100];
    int counter;
    string line;

    ifstream BookInput;
    BookInput.open("Books.txt");

    while(getline(BookInput, line)){
        string line;
        string author;
        int year;

            
            void SetTitle(line);

            void SetAuthor(line);

            void SetYear(line);





    }
























}