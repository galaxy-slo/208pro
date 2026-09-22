#include <iostream>
#include <string>
#include "Book.h"
using namespace std;



void Book::SetTitle(string InTitle){
    title = InTitle;
}

void Book::SetAuthor(string InAuthor){
    author = InAuthor;
}

void Book::SetYear(string InYear){
    year = InYear;
}

void Book::PrintBooks(){
    cout << author << ", " << "\"" << title << "\" (" << year << ")" << endl;

}