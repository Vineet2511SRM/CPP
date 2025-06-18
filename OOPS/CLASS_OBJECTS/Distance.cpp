#include<iostream>
using namespace std;

class Distance {
    private : 
        int meters;
        int centimeters;
    
    public :
        void getDistance() {
            cout << "Enter the distance in meters: ";
            cin >> meters;
            cout << "Enter the distance in centimeters: ";
            cin >> centimeters;
        }

        void displayDistance() {
            cout << "Distance: " << meters << " meters and " << centimeters << " centimeters" << endl;
        }

        Distance addDistances(const Distance& d1, const Distance& d2){
            Distance result;
            result.meters = d1.meters + d2.meters;
            result.centimeters = d1.centimeters + d2.centimeters;

            if(result.centimeters >= 100) {
                result.meters += result.centimeters / 100;
                result.centimeters = result.centimeters % 100;
            }

            return result;
        }
};

int main() {
    Distance distance1, distance2, result;
    distance1.getDistance();
    distance2.getDistance();
    result = result.addDistances(distance1, distance2);
    cout << "Sum of distances: " <<endl;
    result.displayDistance();
    return 0;
}