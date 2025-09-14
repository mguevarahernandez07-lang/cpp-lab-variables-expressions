// C.cpp
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    double hours, rate;
    cin >> hours >> rate;

    double regHours = min(hours, 40.0);
    double otHours = max(hours - 40.0, 0.0);
    double gross = regHours * rate + otHours * rate * 1.5;
    double tax = 0.18 * gross;
    double benefits = 35.0;
    double net = gross - tax - benefits;

    cout << fixed << setprecision(2);
    cout << "Regular: " << regHours << ", Overtime: " << otHours << endl;
    cout << "Gross: $" << gross << endl;
    cout << "Tax (18%): $" << tax << endl;
    cout << "Benefits: $" << benefits << endl;
    cout << "Net: $" << net << endl;

    return 0;
}
