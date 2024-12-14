// 5.create a dynamic array for storing name of student
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    string *studentNames = new string[numStudents];
    for (int i = 0; i < numStudents; i++)
    {
        cout << "Enter the name of student " << (i + 1) << ": ";
        cin >> ws;
        getline(cin, studentNames[i]);
    }
    cout << "\nList of Student Names:\n";
    for (int i = 0; i < numStudents; i++)
    {
        cout << "Student " << (i + 1) << ": " << studentNames[i] << endl;
    }
    delete[] studentNames;
    return 0;
}