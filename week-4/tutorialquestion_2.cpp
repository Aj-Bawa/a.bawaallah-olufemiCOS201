#include <iostream>
using namespace std;

bool verifyPin(int correctPin);
void displayMenu();
double viewBalance(double balance);
double depositMoney(double balance);
double withdrawMoney(double balance, double dailyLimit);
int resetPin(int currentPin);

int main()
{

    double balance = 50000.0;
    double dailyLimit = 20000.0;
    int userPin = 4321;

    if (!verifyPin(userPin))
    {
        cout << "\nAccount Locked. Please contact your bank." << endl;
        return 0;
    }

    int choice;
    do
    {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            viewBalance(balance);
            break;
        case 2:
            balance = depositMoney(balance);
            break;
        case 3:
            balance = withdrawMoney(balance, dailyLimit);
            break;
        case 4:
            userPin = resetPin(userPin);
            break;
        case 5:
            cout << "Thank you for using our ATM." << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}

bool verifyPin(int correctPin)
{
    int inputPin;
    int attempts = 0;

    cout << "Welcome to the ATM." << endl;

    while (attempts < 3)
    {
        cout << "Please enter your PIN: ";
        cin >> inputPin;

        if (inputPin == correctPin)
        {
            return true;
        }
        else
        {
            attempts++;
            cout << "Incorrect PIN. Attempts remaining: " << (3 - attempts) << endl;
        }
    }

    return false;
}

void displayMenu()
{
    cout << "\n======== ATM MENU ========" << endl;
    cout << "1. View Balance" << endl;
    cout << "2. Deposit Cash" << endl;
    cout << "3. Withdraw Cash" << endl;
    cout << "4. Reset PIN" << endl;
    cout << "5. Exit" << endl;
}

double viewBalance(double balance)
{
    cout << "Current Balance: N" << balance << endl;
    return balance;
}

double depositMoney(double balance)
{
    double amount;
    cout << "Enter amount to deposit: N";
    cin >> amount;

    if (amount > 0)
    {
        balance += amount;
        cout << "Deposit successful. New balance: N" << balance << endl;
    }
    else
    {
        cout << "Invalid amount. Deposit failed." << endl;
    }

    return balance;
}

double withdrawMoney(double balance, double dailyLimit)
{
    double amount;
    cout << "Enter amount to withdraw: N";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid amount." << endl;
        return balance;
    }

    if (amount > balance)
    {
        cout << "Insufficient funds." << endl;
    }
    else if (amount > dailyLimit)
    {
        cout << "Transaction declined. Amount exceeds daily limit of N" << dailyLimit << endl;
    }
    else
    {
        balance -= amount;
        cout << "Please take your cash. New balance: N" << balance << endl;
    }

    return balance;
}

int resetPin(int currentPin)
{
    int oldPin, newPin;
    cout << "Enter current PIN: ";
    cin >> oldPin;

    if (oldPin == currentPin)
    {
        cout << "Enter new PIN: ";
        cin >> newPin;
        cout << "PIN changed successfully." << endl;
        return newPin;
    }
    else
    {
        cout << "Incorrect PIN. Cannot reset." << endl;
        return currentPin;
    }
}