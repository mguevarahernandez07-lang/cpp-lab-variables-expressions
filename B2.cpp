// B2.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int wins, games;
    cin >> wins >> games;

    if (games == 0) {
        cout << "No games played." << endl;
    } else {
        double pct = static_cast<double>(wins) / games * 100.0;
        cout << fixed << setprecision(1);
        cout << "Win% = " << pct << "%" << endl;
    }

    return 0;
}
