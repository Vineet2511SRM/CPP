#include<iostream>
using namespace std;

class Book {
    private:
        string title;
        string author;
        double price;
    public:
        // Default Constructor
        Book(): title("No Title"), author("No Author"), price(0.0) {
            cout << "Default Constructor called" << endl;
        }
        
        // Member function to display book details
        void display() {
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: " << price << endl;
        }
};

int main(){
    // Creating objects of class Book
    Book myBook;

    // Displaying the details of the book
    cout << "Details of the book: " << endl;
    myBook.display();
    return 0;
}