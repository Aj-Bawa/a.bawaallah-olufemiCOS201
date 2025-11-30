#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numberOfItems;
    cout << "Enter the number of items: ";
    cin >> numberOfItems;

    string bestItemName;
    double minPrice = 0.0;

    for (int i = 0; i < numberOfItems; i++)
    {
        string name;
        double price;

        cout << "Enter item " << (i + 1) << "'s name: ";
        cin >> name;
        cout << "Enter item " << (i + 1) << "'s price: ";
        cin >> price;

        if (i == 0 || price < minPrice)
        {
            minPrice = price;
            bestItemName = name;
        }
    }

    if (numberOfItems > 0)
    {
        cout << "The item with the lowest price is " << bestItemName << " with a price of " << minPrice << endl;
    }
    else
    {
        cout << "No items were entered." << endl;
    }

    return 0;
}