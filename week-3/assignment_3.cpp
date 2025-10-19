#include <iostream>
using namespace std;

int main() {
    double totalAmount, tax, finalAmount;

    cout << "Enter total purchase amount: ";
    cin >> totalAmount;

    tax = totalAmount * 0.06;
    finalAmount = totalAmount + tax;

    cout << "Sales tax (6%) = " << tax << endl;
    cout << "Total amount after tax = " << finalAmount << endl;

    return 0;
}
