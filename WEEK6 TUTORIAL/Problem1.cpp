#include <iostream>
#include <string>
using namespace std;

// Base class: Student
class Student {
protected:
    string name;
    int rollNumber;

public:
    Student(string n, int r) : name(n), rollNumber(r) {}

    void displayStudentDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Base class: SportsPlayer
class SportsPlayer {
protected:
    string sportName;
    int ranking;

public:
    SportsPlayer(string s, int r) : sportName(s), ranking(r) {}

    void displaySportsDetails() {
        cout << "Sport: " << sportName << endl;
        cout << "Ranking: " << ranking << endl;
    }
};

// Derived class: SportStudent (inherits from both Student and SportsPlayer)
class SportStudent : public Student, public SportsPlayer {
public:
    SportStudent(string n, int r, string s, int rank)
        : Student(n, r), SportsPlayer(s, rank) {}

    void displayDetails() {
        cout << "------------------------------" << endl;
        displayStudentDetails();
        displaySportsDetails();
        cout << "------------------------------" << endl;
    }
};

int main() {
    // Creating a SportStudent object
    SportStudent athlete1("Vineet Seth", 101, "Cricket", 2);

    SportStudent athelete2("Aryan Sharma", 102, "Football", 1);

    // Display details of the athletes
    cout << "Athlete 1 Details:" << endl;
    athlete1.displayDetails();
    cout << "Athlete 2 Details:" << endl;
    athelete2.displayDetails();

    return 0;
}
