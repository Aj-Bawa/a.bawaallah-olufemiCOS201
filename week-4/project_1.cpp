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

int main()
{
    int a, b;
    cout << "Enter two numbers to add: ";
    cin >> a >> b;
    
    int resultSum = sum(a, b);
    cout << "The sum of " << a << " and " << b << " is: " << resultSum << endl;

    cout << "--------------------------------" << endl;

    int c;
    cout << "Enter a number to square: ";
    cin >> c;

    int resultSquare = square(c);
    cout << "The square of " << c << " is: " << resultSquare << endl;

    return 0;
}