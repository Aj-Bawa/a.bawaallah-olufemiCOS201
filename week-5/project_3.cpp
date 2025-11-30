#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(0));

    int counts[7] = {0}; 

    for (int i = 0; i < 10000; i++)
    {
        int face = (rand() % 6) + 1;
        
        counts[face]++;
    }

    cout << "Face" << setw(13) << "Frequency" << endl;
    cout << "----" << setw(13) << "---------" << endl;

    for (int face = 1; face <= 6; face++)
    {
        cout << setw(4) << face << setw(13) << counts[face] << endl;
    }

    return 0;
}