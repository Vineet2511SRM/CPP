#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int studentID;
    string studentName;
    int marks[5];

public:
    // Function to set student details
    void setDetails(int id, const string& name, int m[]) {
        studentID = id;
        studentName = name;
        for (int i = 0; i < 5; i++) {
            marks[i] = m[i];
        }
    }

    // Function to calculate student's average marks
    float calculateAverage() {
        float sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        return sum / 5;
    }

    // Function to display student details along with their average marks
    void display()  {
        cout << "----------------------------------" << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Average Marks: " << calculateAverage() << endl;
        cout << "----------------------------------" << endl;
    }
};

int main() {
    // Creating student objects
    Student student1, student2, student3;
    
    // Setting details for each student
    int marks1[] = {90, 85, 95, 88, 92};
    int marks2[] = {80, 75, 85, 78, 82};
    int marks3[] = {70, 65, 75, 68, 72};
    
    student1.setDetails(101, "Vineet", marks1);
    student2.setDetails(102, "Rahul", marks2);
    student3.setDetails(103, "Amit", marks3);

    // Displaying student details
    cout << "Student Details: " << endl;
    student1.display();
    student2.display();
    student3.display();

    return 0;
}

/*RESULT
Student Details:
----------------------------------
Student ID: 101
Student Name: Vineet
Marks: 90 85 95 88 92
Average Marks: 90
----------------------------------

----------------------------------
Student ID: 102
Student Name: Rahul
Marks: 80 75 85 78 82
Average Marks: 80
----------------------------------

----------------------------------
Student ID: 103
Student Name: Amit
Marks: 70 65 75 68 72
Average Marks: 70
----------------------------------


*/
