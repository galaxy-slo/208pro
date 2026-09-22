#ifndef BOOK_H_
#define BOOK_H_
using namespace std;
#include <string>

class Book{

    public:
        void SetTitle(string InTitle);
        void SetAuthor(string InAuthor);
        void SetYear(int InYear);

        void PrintBooks();






    private:
        string title;
        string author;
        int year;






};

#endif