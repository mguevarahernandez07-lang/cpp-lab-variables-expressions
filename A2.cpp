#include <iostream>
using namespace std;

int main() {
    int a = 7;
    int b = 3;
    double c = 7.0;
    double d = 3.0;

    cout << "Integer division (a / b): " << a / b << endl;
    cout << "Double division (c / d): " << c / d << endl;
    cout << "Mixed division (a / d): " << a / d << endl;

    cout << "Addition: a + b = " << a + b << endl;
    cout << "Subtraction: a - b = " << a - b << endl;
    cout << "Multiplication: a * b = " << a * b << endl;
    cout << "Remainder (a % b): " << a % b << endl;

    return 0;
}
