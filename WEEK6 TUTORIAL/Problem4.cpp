#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    string name;
    int rollNumber;

public:
    void setStudentDetails(string n, int roll) {
        name = n;
        rollNumber = roll;
    }

    void displayStudentDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Derived class 1: Academics
class Marks : virtual public Student {
protected:
    int subject1, subject2, subject3;
    int totalAcademic;

public:
    void setMarks(int m1, int m2, int m3) {
        subject1 = m1;
        subject2 = m2;
        subject3 = m3;
        totalAcademic = subject1 + subject2 + subject3;
    }

    void displayMarks() {
        cout << "Marks in 3 Subjects: " << subject1 << ", " << subject2 << ", " << subject3 << endl;
        cout << "Total Academic Marks: " << totalAcademic << endl;
    }

    int getAcademicTotal() {
        return totalAcademic;
    }
};

// Derived class 2: Sports
class Sports : virtual public Student {
protected:
    int sportsMarks;

public:
    void setSportsMarks(int sm) {
        sportsMarks = sm;
    }

    void displaySportsMarks() {
        cout << "Sports Marks: " << sportsMarks << endl;
    }

    int getSportsMarks() {
        return sportsMarks;
    }
};

// Final class: Result (Hybrid Inheritance)
class Result : public Marks, public Sports {
public:
    void displayResult() {
        int grandTotal = getAcademicTotal() + getSportsMarks();
        float average = grandTotal / 4.0;

        cout << "\n----- Student Performance Report -----\n";
        displayStudentDetails();
        displayMarks();
        displaySportsMarks();
        cout << "Overall Total Marks: " << grandTotal << endl;
        cout << "Average Marks: " << average << endl;
    }
};

int main() {
    Result r;

    // Input data
    r.setStudentDetails("Vineet Seth", 101);
    r.setMarks(85, 90, 88);
    r.setSportsMarks(75);

    // Display result
    r.displayResult();

    return 0;
}
