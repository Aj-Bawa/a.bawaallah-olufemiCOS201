#include <iostream>
using namespace std;

int main() {
    double balance, interestRate, newBalance;

    cout << "Interest calculation program" << endl;

    cout << "Enter starting balance: ";
    cin >> balance;

    cout << "Enter annual interest rate: ";
    cin >> interestRate;

    newBalance = balance + (balance * interestRate / 100);

    cout << "Balance after one year = " << newBalance << endl;

    return 0;
}
