#include <iostream>
using namespace std;

int sum(int num1, int num2)
{
    return num1 + num2;
}

int square(int num)
{
    return num * num;
}

void printSum(int num1, int num2)
{
    cout << "The sum of " << num1 << " and " << num2 << " is: " << (num1 + num2) << endl;
}

inline int triple(int num)
{
    return num * 3;
}

int main()
{
    cout << "--- Exercise 1: Return Sum ---" << endl;
    int a, b;
    cout << "Enter two numbers to add: ";
    cin >> a >> b;
    int resultSum = sum(a, b);
    cout << "Result: " << resultSum << endl << endl;

    cout << "--- Exercise 2: Square ---" << endl;
    int c;
    cout << "Enter a number to square: ";
    cin >> c;
    int resultSquare = square(c);
    cout << "Result: " << resultSquare << endl << endl;

    cout << "--- Exercise 3: Void printSum ---" << endl;
    printSum(10, 20);
    printSum(5, 7);
    printSum(-3, 8);
    cout << endl;

    cout << "--- Exercise 4: Inline Triple ---" << endl;
    int val1 = 5;
    int val2 = 12;
    
    cout << "Triple of " << val1 << " is: " << triple(val1) << endl;
    cout << "Triple of " << val2 << " is: " << triple(val2) << endl;

    return 0;
}