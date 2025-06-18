//LIBRARY SYSTEM TO MANAGE BOOKS

#include<iostream>
#include<string>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    float  price;

public:
    // Default constructor
    Book() {
        bookID = 0;
        title = "";
        author = "";
        price = 0.0;
    }

    // Parameterized constructor for initializing book details
    Book(int id, const string& t, const string& a, float p) {
        bookID = id;
        title = t;
        author = a;
        price = p;
    }

    // Function to display book details
    void displayBookInfo() {
        cout << "----------------------------------" << endl;
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
        cout << "----------------------------------" << endl;
    }
};

int main() {
    // Creating an object using the default constructor
    Book defaultBook;

    // Creating multiple Book objects
    Book b1(101, "The Alchemist", "Paulo Coelho", 15.0);
    Book b2(102, "The Great Gatsby", "F. Scott Fitzgerald", 12.0);
    Book b3(103, "To Kill a Mockingbird", "Harper Lee", 10.0);

    // Displaying book details
    cout << "Default Book Details:" << endl;
    defaultBook.displayBookInfo();
    cout << endl;

    cout << "Book 1 Details:" << endl;
    b1.displayBookInfo();
    cout << endl;

    cout << "Book 2 Details:" << endl;
    b2.displayBookInfo();
    cout << endl;

    cout << "Book 3 Details:" << endl;
    b3.displayBookInfo();
    cout << endl;

    return 0;
}