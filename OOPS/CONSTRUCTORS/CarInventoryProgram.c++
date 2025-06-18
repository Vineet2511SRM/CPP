#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
    double price;
    static int totalCars;  // Static data member to keep track of total cars

public:
    // Constructor to initialize attributes
    Car(string b, string m, int y, double p) : brand(b), model(m), year(y), price(p) {
        totalCars++;
    }

    // Function to display car information
    void displayCarInfo() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Price: $" << price << endl;
    }

    // Static function to get total number of cars
    static int getTotalCars() {
        return totalCars;
    }
};

// Initialize static member
int Car::totalCars = 0;

int main() {
    // Creating multiple Car objects
    Car car1("Toyota", "Corolla", 2020, 20000);
    Car car2("Honda", "Civic", 2019, 22000);
    Car car3("Ford", "Mustang", 2021, 35000);

    // Displaying information of each car
    cout << "Car 1 Details:" << endl;
    car1.displayCarInfo();
    cout << endl;

    cout << "Car 2 Details:" << endl;
    car2.displayCarInfo();
    cout << endl;

    cout << "Car 3 Details:" << endl;
    car3.displayCarInfo();
    cout << endl;

    // Displaying total number of cars created
    cout << "Total Cars in Inventory: " << Car::getTotalCars() << endl;

    return 0;
}
