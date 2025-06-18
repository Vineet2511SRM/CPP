#include<iostream>
using namespace std;

class Distance{
    int inches;
    int feet;
    public:
        void setDistance(int f, int i){
            feet = f;
            inches = i;
        }
        Distance add(Distance d){
            Distance result;
            result.inches = inches + d.inches;
            // convert inches to feet if greater than 12
            result.feet = feet + d.feet + result.inches/12;
            result.inches = result.inches % 12;
            return result;
        }

        // Function to display the distance
        void displayDistance() {
            cout << "Distance: " << feet << " feet and " << inches << " inches" << endl;
        }
};

int main(){
    Distance d1,d2,result;
    int feet1, inches1, feet2, inches2;

    // Input for first distance
    cout << "Enter the distance in feet and inches for the first distance: ";
    cin >> feet1 >> inches1;
    d1.setDistance(feet1, inches1);

    // Input for second distance
    cout << "Enter the distance in feet and inches for the second distance: ";
    cin >> feet2 >> inches2;
    d2.setDistance(feet2, inches2);

    // Adding the two distances
    result = d1.add(d2);

    // Displaying the result
    cout << "Sum of distances: " << endl;
    result.displayDistance();

    return 0;
}