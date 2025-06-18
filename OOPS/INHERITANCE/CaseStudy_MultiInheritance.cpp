// Multilevel inheritance explaining case study for various members in institution

#include<iostream>
using namespace std;

// Base class : Person
class Person {
    protected :
        string name;
        int age;
        int id;
    
    public :
        // Constructor for the base class
        Person(string personName, int personAge, int personID) :
            name(personName), age(personAge), id(personID){}
        
        // Method to display person details
        void displayPersonInfo() const {
            cout<< "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "ID : "  << id << endl;

        }
    };
// Derived class : Student (Inherits from Person)
class Student : public Person {
    protected:
        string department;
        float GPA;
    
    public :
        // Constructor for the Student class
        Student(string studentName, int studentAge, int studentID, string dept, float studentGPA) :
            Person(studentName, studentAge, studentID),
            department(dept), GPA(studentGPA) {}
        
        // Method to display Student details (including person info)
        void displayStudentInfo() const {
            displayPersonInfo();
            cout << "Department : " << department << endl;
            cout << "GPA : " << GPA << endl;
        }
};

class GraduateStudent : public Student { 
    private:
        string researchTopic;
    public:
        // Constructor for the GraduateStudent class
        GraduateStudent(string gradName, int gradAge, int gradID, string dept, float gradGPA, string topic):
            Student(gradName, gradAge, gradID, dept, gradGPA),
            researchTopic(topic) {}
        
        // Method to display GraduateStudent details alongwith Student and Person info
        void displayGraduateStudentInfo() const {
            displayStudentInfo();
            cout << "Research topic : " << researchTopic << endl;

        }
};

int main(){
    // Creating an object of GraduateStudent and displaying its details
    GraduateStudent gradStudent("Vineet", 28, 9, "Computer Science", 9.7, "Cyber Security");

    // displaying information of the graduate student
    cout << "Graduate Student Information : " << endl;
    gradStudent.displayGraduateStudentInfo();
    return 0;
}