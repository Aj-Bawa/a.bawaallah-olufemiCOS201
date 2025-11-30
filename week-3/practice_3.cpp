#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    int sum = 0;

    while (number < 20)
    {
        number++;
        sum += number;
        if (sum >= 100)
            break;
    }

    cout << "The number is " << number << endl;
    cout << "The sum is " << sum << endl;

    return 0;
}