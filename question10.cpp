#include <iostream>
using namespace std;

class MyClass 
{
public:
    int *ptr;

    // Constructor
    MyClass(int val) 
    {
        ptr = new int;
        *ptr = val;
        cout << "Constructor: Value = " << *ptr << endl;
    }

    // Copy Constructor
    MyClass(const MyClass &obj) 
    {
        ptr = new int;
        *ptr = *(obj.ptr);
        cout << "Copy Constructor: Value = " << *ptr << endl;
    }
};

int main() 
{
    MyClass obj1(100); // Calls the constructor
    MyClass obj2 = obj1; // Calls the copy constructor
    return 0;
}

