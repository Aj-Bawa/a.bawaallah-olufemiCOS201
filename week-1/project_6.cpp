#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double balance, interestRate;

    cout << "Interest calculation program" << endl;

    cout << "Enter starting balance: ";
    cin >> balance;

    cout << "Enter annual interest rate: ";
    cin >> interestRate;

    balance = balance + (balance * interestRate / 100);
    cout << fixed << setprecision(2);
    cout << "Balance after one year = " << balance << endl;

    balance = balance + (balance * interestRate / 100);
    cout << "Balance after two years = " << balance << endl;

    return 0;
}
