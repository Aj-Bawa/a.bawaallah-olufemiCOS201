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

    string secondBestItemName;
    double secondMinPrice = 0.0;

    for (int i = 0; i < numberOfItems; i++)
    {
        string name;
        double price;

        cout << "Enter item " << (i + 1) << "'s name: ";
        cin >> name;
        cout << "Enter item " << (i + 1) << "'s price: ";
        cin >> price;

        if (i == 0)
        {
            minPrice = price;
            bestItemName = name;
        }
        else if (i == 1)
        {
            if (price < minPrice)
            {
                secondMinPrice = minPrice;
                secondBestItemName = bestItemName;
                minPrice = price;
                bestItemName = name;
            }
            else
            {
                secondMinPrice = price;
                secondBestItemName = name;
            }
        }
        else
        {
            if (price < minPrice)
            {
                secondMinPrice = minPrice;
                secondBestItemName = bestItemName;
                minPrice = price;
                bestItemName = name;
            }
            else if (price < secondMinPrice)
            {
                secondMinPrice = price;
                secondBestItemName = name;
            }
        }
    }

    if (numberOfItems > 1)
    {
        cout << "The item with the lowest price is " << bestItemName << " with a price of " << minPrice << endl;
        cout << "The item with the second-lowest price is " << secondBestItemName << " with a price of " << secondMinPrice << endl;
    }
    else if (numberOfItems == 1)
    {
        cout << "The item with the lowest price is " << bestItemName << " with a price of " << minPrice << endl;
        cout << "Not enough items to determine a second-lowest price." << endl;
    }
    else
    {
        cout << "No items were entered." << endl;
    }

    return 0;
}