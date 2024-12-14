//Q1) WAP IN C++ USING CLASS AND OBJECT TO CALCULATE THE AREA AND VOLUME OF THE ROOM.
#include <iostream>
using namespace std;

class Room {
public:
    double length, breadth, height;

    // Function to read dimensions of the room
    void read() {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the breadth: ";
        cin >> breadth;
        cout << "Enter the height: ";
        cin >> height;
    }

    // Function to calculate and display area and volume
    void calculate() {
        double area = length * breadth; // Calculate area
        double volume = length * breadth * height; // Calculate volume
        cout << "Area is: " << area << endl; // Display area
        cout << "Volume is: " << volume << endl; // Display volume
    }
};

int main() {
    Room room; // Create an object of Room class
    room.read(); // Read dimensions
    room.calculate(); // Calculate and display area and volume
    return 0;
}