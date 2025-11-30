#include <iostream>
using namespace std;

int main()
{
    int number;
    int positives = 0;
    int negatives = 0;
    int count = 0;
    double total = 0;

    cout << "Enter an integer, the input ends if it is 0: ";
    cin >> number;

    if (number == 0)
    {
        cout << "No numbers are entered except 0" << endl;
        return 0;
    }

    while (number != 0)
    {
        if (number > 0)
            positives++;
        else
            negatives++;

        total += number;
        count++;

        cin >> number;
    }

    double average = total / count;

    cout << "The number of positives is " << positives << endl;
    cout << "The number of negatives is " << negatives << endl;
    cout << "The total is " << total << endl;
    cout << "The average is " << average << endl;

    return 0;
}