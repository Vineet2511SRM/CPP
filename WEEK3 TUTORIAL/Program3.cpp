//ONLINE SHOPPING CART SYSTEM <3

#include<iostream>
#include<string>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    float Price;
    int Quantity;
public:
    // Function to set product details
    void setDetails(int id, const string& name, float price, int quantity) {
        productID = id;
        productName = name;
        Price = price;
        Quantity = quantity;
    }

    // Function to calculate total cost based on quantity
    float calculateTotalPrice() {
        return Price * Quantity; // total price = price * quantity
    }

    // Function to display product details along with total cost
    void display()  {
        cout << "----------------------------------" << endl;
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << Price << endl;
        cout << "Quantity: " << Quantity << endl;
        cout << "Total Price: " << calculateTotalPrice() << endl;
        cout << "----------------------------------" << endl;
    }
};

int main() {
    // Creating array of product objects
    Product products[2];
    int id;
    string name;
    float price;
    int quantity;

    // Setting details for each product
    for (int i = 0; i < 2; i++) {
        cout << "Enter Product ID: ";
        cin >> id;
        cout << "Enter Product Name: ";
        cin >> name;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;
        products[i].setDetails(id, name, price, quantity);
    }

    // Displaying product details
    cout << "Product Details: " << endl;
    for (int i = 0; i < 2; i++) {
        products[i].display();
    }

    return 0;

}

/*OUTPUT
Enter Product ID: 101
Enter Product Name: Washing Machine
Enter Price: 32000
Enter Quantity: 2
Enter Product ID: 102
Enter Product Name: Refrigerator
Enter Price: 25000
Enter Quantity: 3

Product Details:
----------------------------------
Product ID: 101
Product Name: Washing Machine
Price: 32000
Quantity: 2
Total Price: 64000
----------------------------------
----------------------------------
Product ID: 102
Product Name: Refrigerator
Price: 25000
Quantity: 3
Total Price: 75000
----------------------------------


*/