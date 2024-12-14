#include <iostream>
using namespace std;

class rectangle
{
    double length, width, result;
public:
    void area()
    {
        result = length * width;
        cout << "Area is: " << result << endl;
    }
    
    void read()
    {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the width: ";
        cin >> width;
    }
    
    void display()
    {
        cout << "The length is: " << length << endl;
        cout << "The width is: " << width << endl;
    }
};

int main()
{
    rectangle obj;
    obj.read();
    obj.display();
    obj.area();
    return 0;
}