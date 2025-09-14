# cpp-lab-variables-expressions
# Lab: Variables, Expressions, Type Conversion & Debugging (C++)

## Part A — Expressions & Assignments

### A1. Precedence Check
```cpp
// A1.cpp
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << "a + b * c = " << (a + b * c) << endl;
    cout << "(a + b) * c = " << ((a + b) * c) << endl;
    cout << "a / b * c = " << (a / b * c) << endl;
    cout << "a / (b * c) = " << (a / (b * c)) << endl;

    return 0;
}
