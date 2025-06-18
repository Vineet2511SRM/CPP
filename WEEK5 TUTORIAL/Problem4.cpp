#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    double pricePerDay;
    bool available;

public:
    // Default Constructor
    Car() : model("Unknown"), pricePerDay(1000), available(true) {}

    // Parameterized Constructor
    Car(string m, double price, bool avail) : model(m), pricePerDay(price), available(avail) {}

    // Copy Constructor
    Car(const Car& c) {
        model = c.model;
        pricePerDay = c.pricePerDay;
        available = c.available;
    }

    // Function to display car details
    void displayCar() {
        cout << "Car Model: " << model << ", Price per day: Rs." << pricePerDay;
        cout << ", Available: " << (available ? "Yes" : "No") << endl;
    }

    // Function Overloading for booking a car
    void bookCar(int days) { // Booking with default price
        if (available) {
            cout << "Car booked for " << days << " days. Total Cost: Rs." << (pricePerDay * days) << endl;
            available = false;
        } else {
            cout << "Car not available for booking!" << endl;
        }
    }

    void bookCar(int days, double discount) { // Booking with discount
        if (available) {
            double totalCost = (pricePerDay * days) * (1 - discount / 100);
            cout << "Car booked for " << days << " days with " << discount << "% discount. Total Cost: Rs." << totalCost << endl;
            available = false;
        } else {
            cout << "Car not available for booking!" << endl;
        }
    }

    void bookCar(int days, double insurance, bool includeInsurance) { // Booking with insurance
        if (available) {
            double totalCost = (pricePerDay * days) + insurance;
            cout << "Car booked for " << days << " days with insurance (Rs." << insurance << "). Total Cost: Rs." << totalCost << endl;
            available = false;
        } else {
            cout << "Car not available for booking!" << endl;
        }
    }

    // Operator Overloading: + (Adding rental prices)
    double operator+(const Car& c) {
        return this->pricePerDay + c.pricePerDay;
    }

    // Operator Overloading: > (Comparing rental price)
    bool operator>(const Car& c) {
        return this->pricePerDay > c.pricePerDay;
    }
};

// Main Function
int main() {
    Car car1("Hyundai i20", 1500, true);
    Car car2("Honda City", 2500, true);
    Car car3 = car2; // Copy constructor

    cout << "Available Cars:\n";
    car1.displayCar();
    car2.displayCar();
    car3.displayCar();

    // Booking Cars using Function Overloading
    cout << "\nBooking Cars:\n";
    car1.bookCar(3); // Normal booking
    car2.bookCar(5, 10); // Booking with discount
    car3.bookCar(2, 500, true); // Booking with insurance

    // Operator Overloading: Adding rental prices
    double totalRentalPrice = car1 + car2;
    cout << "\nTotal rental price of both cars: Rs." << totalRentalPrice << endl;

    // Operator Overloading: Comparing rental prices
    if (car1 > car2)
        cout << "Hyundai i20 is more expensive to rent per day." << endl;
    else
        cout << "Honda City is more expensive to rent per day." << endl;

    return 0;
}
