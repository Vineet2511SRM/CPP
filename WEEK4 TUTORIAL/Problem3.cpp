// ticket booking system

#include <iostream>
#include <string>
using namespace std;

class MovieTicket {
private:
    string movieName;
    int seatNumber;
    float price;
    bool isBooked;

public:
    // Constructor to initialize ticket details when object is created
    MovieTicket(const string& mName, int sNumber, float p) {
        movieName = mName;
        seatNumber = sNumber;
        price = p;
        isBooked = false; // Initially ticket is not booked
    }

    // Function to book ticket
    void bookTicket() {
        if (!isBooked) {
            isBooked = true;
            cout << "Ticket for seat number " << seatNumber << " booked successfully!" << endl;
        } else {
            cout << "Seat number " << seatNumber << " is already booked!" << endl;
        }
    }

    // Function to cancel ticket
    void cancelTicket() {
        if (isBooked) {
            isBooked = false;
            cout << "Ticket for seat number " << seatNumber << " cancelled successfully!" << endl;
        } else {
            cout << "Seat number " << seatNumber << " is not booked!" << endl;
        }
    }


    // Function to display ticket details
    void displayTicketInfo() const {
        cout << "----------------------------------" << endl;
        cout << "Movie Name: " << movieName << endl;
        cout << "Seat Number: " << seatNumber << endl;
        cout << "Price: $" << price << endl;
        cout << "Status: " << (isBooked ? "Booked" : "Available") << endl;
        cout << "----------------------------------" << endl;
    }

    // Destructor (Called when object is deleted)
    ~MovieTicket() {
        cout << "Seat " << seatNumber << " for " << movieName << " is now removed from the system." << endl;
    }

};

int main() {
    // Creating multiple ticket objects
    MovieTicket t1("Avatar 2", 12, 15.0);
    MovieTicket t2("Inception", 7, 12.5);
    MovieTicket t3("Interstellar", 20, 18.0);

    // Display ticket details before booking
    cout << "Initial Ticket Status:" << endl;
    t1.displayTicketInfo();
    t2.displayTicketInfo();
    t3.displayTicketInfo();

    // Booking tickets
    cout << "\nBooking Tickets..." << endl;
    t1.bookTicket();
    t2.bookTicket();

    // Trying to book an already booked ticket
    t1.bookTicket();  // Should display an error

    // Displaying details after booking
    cout << "\nUpdated Ticket Status:" << endl;
    t1.displayTicketInfo();
    t2.displayTicketInfo();
    t3.displayTicketInfo();

    // Canceling a ticket
    cout << "\nCanceling a Ticket..." << endl;
    t2.cancelTicket();

    // Displaying final ticket status
    cout << "\nFinal Ticket Status:" << endl;
    t1.displayTicketInfo();
    t2.displayTicketInfo();
    t3.displayTicketInfo();

    return 0;  // Destructor will be called here
}

