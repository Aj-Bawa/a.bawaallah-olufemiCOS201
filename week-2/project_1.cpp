#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    
    srand(time(0));

    // Inputs
    string fullName;
    bool isPAU;
    int pauInput;
    int courseChoice;
    int locationChoice;

    cout << "Enter full name: ";
    getline(cin, fullName);

    cout << "Is PAU student? (1=true, 0=false): ";
    cin >> pauInput;
    if (pauInput == 1) {
        isPAU = true;
    } else {
        isPAU = false;
    }

    cout << "Enter course (1-5): ";
    cin >> courseChoice;

    cout << "Enter location (1-5): ";
    cin >> locationChoice;

    // Map Choices
    string courseName;
    int days = 0;
    double regFee = 0.0;

    if (courseChoice == 1) {
        courseName = "Photography";
        days = 3;
        regFee = 10000;
    } else if (courseChoice == 2) {
        courseName = "Painting";
        days = 5;
        regFee = 8000;
    } else if (courseChoice == 3) {
        courseName = "Fish Farming";
        days = 7;
        regFee = 15000;
    } else if (courseChoice == 4) {
        courseName = "Baking";
        days = 5;
        regFee = 13000;
    } else if (courseChoice == 5) {
        courseName = "Public Speaking";
        days = 2;
        regFee = 5000;
    } else {
        cout << "Invalid course choice." << endl;
        return 1;
    }

    double lodgingPerDay = 0.0;
    
    if (locationChoice == 1) {
        lodgingPerDay = 10000;
    } else if (locationChoice == 2) {
        lodgingPerDay = 2500;
    } else if (locationChoice == 3) {
        lodgingPerDay = 5000;
    } else if (locationChoice == 4) {
        lodgingPerDay = 13000;
    } else if (locationChoice == 5) {
        lodgingPerDay = 5000;
    } else {
        cout << "Invalid location choice." << endl;
        return 1;
    }

    // Computations & Business Rules

    double lodgingCost = lodgingPerDay * days;
    double lodgingDiscount = 0.0;
    double regDiscount = 0.0;

    if (isPAU && (locationChoice == 1 || locationChoice == 2)) {
        lodgingDiscount = lodgingCost * 0.05;
    }

    if (days > 5 || regFee > 12000) {
        regDiscount = regFee * 0.03;
    }

    double promo = 0.0;
    int r = rand() % 100 + 1;
    
    if (r == 7 || r == 77) {
        promo = 500.0;
    }

    // Final Totals
    double finalRegFee = regFee - regDiscount;
    double finalLodgingCost = lodgingCost - lodgingDiscount;
    double total = finalRegFee + finalLodgingCost - promo;

    // Output
    cout << "\nPossible Output" << endl;
    cout << "Name: " << fullName << " (PAU student: " << (isPAU ? "Yes" : "No") << ")" << endl;
    
    cout << "Course: " << courseName << " Days: " << days << endl;
    
    cout << fixed << setprecision(0);
    cout << "Registration: #" << regFee << " (reg discount: #" << regDiscount << ")" << endl;
    
    cout << "Lodging: #" << lodgingPerDay << " x " << days << " = #" << lodgingCost 
         << " (lodging discount: #" << lodgingDiscount << ")" << endl;
         
    cout << "Random draw: " << r << " Promo applied: #" << promo << endl;
    
    cout << "TOTAL: #" << total << endl;

    return 0;
}