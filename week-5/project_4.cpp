#include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < size1 && j < size2)
    {
        if (list1[i] < list2[j])
        {
            list3[k] = list1[i];
            i++;
        }
        else
        {
            list3[k] = list2[j];
            j++;
        }
        k++;
    }

    while (i < size1)
    {
        list3[k] = list1[i];
        i++;
        k++;
    }

    while (j < size2)
    {
        list3[k] = list2[j];
        j++;
        k++;
    }
}

void printArray(const int list[], int size)
{
    cout << "{";
    for (int i = 0; i < size; i++)
    {
        cout << list[i];
        if (i < size - 1)
            cout << ", ";
    }
    cout << "}";
}

int main()
{
    const int size1 = 4;
    const int size2 = 5;

    int list1[size1] = {2, 3, 8, 10};
    int list2[size2] = {1, 7, 9, 11, 13};

    const int size3 = size1 + size2;
    int list3[size3];

    merge(list1, size1, list2, size2, list3);

    cout << "List 1: ";
    printArray(list1, size1);
    cout << endl;

    cout << "List 2: ";
    printArray(list2, size2);
    cout << endl;

    cout << "Merged List: ";
    printArray(list3, size3);
    cout << endl;

    return 0;
}