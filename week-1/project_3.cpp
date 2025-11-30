#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double side1, side2, hypotenuse;

    cout << "Enter the length of the first side: ";
    cin >> side1;
    cout << "Enter the length of the second side: ";
    cin >> side2;

    hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));

    cout << "\nThe hypotenuse of the triangle is: " << hypotenuse << endl;

    return 0;
}
