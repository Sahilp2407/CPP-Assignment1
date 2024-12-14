#include <iostream>
using namespace std;

class employee {
public:
    // Constructor
    employee() {
        cout << "Constructor Invoked" << endl; 
    }

    // Destructor
    ~employee() {
        cout << "Destructor Invoked" << endl; 
    }
};

int main() {
    employee e1; 
    return 0; 
}