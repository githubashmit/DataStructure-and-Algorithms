#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
};

int main() {
    Book book;
    book.title = "The Great Gatsby";
    book.author = "F. Scott Fitzgerald";

    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author;

    return 0;
}