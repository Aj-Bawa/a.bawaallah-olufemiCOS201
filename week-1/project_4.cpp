#include <iostream>
using namespace std;

int main() {
    double purchaseAmount, salesTax, totalAmount;

    cout << "Enter the total purchase amount: ";
    cin >> purchaseAmount;

    salesTax = purchaseAmount * 0.06;

    totalAmount = purchaseAmount + salesTax;

    cout << "\nSales Tax (6%): " << salesTax << endl;
    cout << "Total Amount (including tax): " << totalAmount << endl;

    return 0;
}
