#include <iostream>
using namespace std;

class Book {
protected:
    int bookID;
    string bookName;

public:
    void getBook() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cout << "Enter Book Name: ";
        cin >> bookName;
    }
};

class Library : public Book {
private:
    string author;
    string issueStatus;

public:
    void getLibrary() {
        getBook();
        cout << "Enter Author Name: ";
        cin >> author;
        cout << "Enter Issue Status (Issued/Available): ";
        cin >> issueStatus;
    }

    void display() {
        cout << "\nBook ID: " << bookID << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Author: " << author << endl;
        cout << "Issue Status: " << issueStatus << endl;
    }
};

int main() {
    Library l;
    l.getLibrary();
    l.display();
    return 0;
}