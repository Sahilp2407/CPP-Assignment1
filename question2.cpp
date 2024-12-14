// 2.implement a program for string manipulation(reverse,palindrome check:
#include <iostream>
#include <string>
using namespace std;
string reverseString(const string &str)
{
    string reversedStr = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversedStr += str[i];
    }
    return reversedStr;
}
bool isPalindrome(const string &str)
{
    string reversedStr = reverseString(str);
    return str == reversedStr;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    string reversed = reverseString(input);
    cout << "Reversed String: " << reversed << endl;
    if (isPalindrome(input))
    {
        cout << "\"" << input << "\" is a palindrome." << endl;
    }
    else
    {
        cout << "\"" << input << "\" is not a palindrome." << endl;
    }

    return 0;
}