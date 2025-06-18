#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    float price;
    int quantity;

public:
    // Default Constructor (Initializes default values)
    Product() {
        productID = 0;
        productName = "Unknown";
        price = 0.0;
        quantity = 0;
    }

    // Parameterized Constructor (Initializes with given values)
    Product(int id, string name, float p, int q) {
        productID = id;
        productName = name;
        price = p;
        quantity = q;
    }

    // Function to calculate total price
    float calculateTotalPrice() {
        return price * quantity;
    }

    // Function to display product details
    void displayProductInfo() {
        cout << "----------------------------------" << endl;
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Price: $" << calculateTotalPrice() << endl;
        cout << "----------------------------------" << endl;
    }

    // Destructor (Called when object is deleted)
    ~Product() {
        cout << "Product ID: " << productID << " (" << productName << ") removed from cart." << endl;
    }
};

int main() {

    //Creating object for default constructor
    Product product1;
    product1.displayProductInfo();

    
    // Creating an array of Product objects
    Product products[3] = {
        Product(101, "Laptop", 75000, 1),
        Product(102, "Smartphone", 30000, 2),
        Product(103, "Headphones", 2500, 3)
    };

    // Displaying product details
    cout << "Products in Cart:" << endl;
    for (int i = 0; i < 3; i++) {
        products[i].displayProductInfo();
    }

    return 0;  // Destructor will be called automatically here
}

