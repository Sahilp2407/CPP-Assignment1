//Q1) WAP IN C++ TO CALCULATE THE SUM OF N NATURAL NUMBERS USING RECURSION
#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum(n - 1);
    }
}

int main() {
    int n, result;
    cout << "Enter a number: ";
    cin >> n;
    result = sum(n);
    cout << "Sum of first " << n << " natural numbers = " << result << endl;
    return 0;
}