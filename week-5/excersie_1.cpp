#include <iostream>
using namespace std;

int main()
{
    int numbers[8] = {23, 4, 12, 89, 5, 1, 56, 10};
    
    int max = numbers[0];

    for (int i = 1; i < 8; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    int minIndex = 0;
    
    for (int i = 1; i < 8; i++)
    {
        if (numbers[i] < numbers[minIndex])
        {
            minIndex = i;
        }
    }

    cout << "The array elements are: ";
    for(int i = 0; i < 8; i++) cout << numbers[i] << " ";
    cout << endl << endl;

    cout << "The largest element is: " << max << endl;
    cout << "The index of the smallest element is: " << minIndex << " (Value: " << numbers[minIndex] << ")" << endl;

    return 0;
}