// D.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int items; 
    double price;
    cout << "Enter items and price: ";
    cin >> items >> price;

    double total = items * price; 

    int discountPercent = 15;
    double discount = total * (static_cast<double>(discountPercent) / 100.0);

    double shipping = 5 + 2 * items;
    double afterDiscount = total - discount;
    if (afterDiscount >= 100.0) shipping = 0;

    cout << fixed << setprecision(2);
    cout << "Total: $" << total << "\n";
    cout << "Discount: $" << discount << "\n";
    cout << "Shipping: $" << shipping << "\n";
    cout << "Grand Total: $" << (afterDiscount + shipping) << "\n";

    return 0;
}
