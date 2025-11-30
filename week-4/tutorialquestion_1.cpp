#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(0));

    // Fixed Values
    const double BASE_TUITION = 1500000.0;
    const double MAIN_HOSTEL_FEE = 180000.0;
    const double ANNEX_HOSTEL_FEE = 120000.0;
    
    // Inputs
    string fullName;
    int jambScore;
    double waecAverage;
    int age;
    int firstChoiceInput, disciplinaryInput, hostelChoice;
    bool isFirstChoice, hasDisciplinaryRecord;

    cout << "--- PAU Admissions Processing System ---" << endl;
    cout << "Enter full name: ";
    getline(cin, fullName);

    cout << "Enter JAMB score (0-400): ";
    cin >> jambScore;

    cout << "Enter WAEC average (0-100): ";
    cin >> waecAverage;

    cout << "Enter age: ";
    cin >> age;

    cout << "Is PAU your first choice? (1 for Yes, 0 for No): ";
    cin >> firstChoiceInput;
    isFirstChoice = (firstChoiceInput == 1);

    cout << "Do you have any disciplinary record? (1 for Yes, 0 for No): ";
    cin >> disciplinaryInput;
    hasDisciplinaryRecord = (disciplinaryInput == 1);

    cout << "Select Hostel Preference:" << endl;
    cout << "1. Main Hostel (N180,000)" << endl;
    cout << "2. Annex Hostel (N120,000)" << endl;
    cout << "3. Day Student (N0)" << endl;
    cout << "Enter choice (1-3): ";
    cin >> hostelChoice;

    // Admission Decision
    string admissionStatus = "Pending"; 

    if (hasDisciplinaryRecord || age < 15)
    {
        admissionStatus = "Rejected";
    }
    else
    {
        bool criteria1 = (jambScore >= 220 && waecAverage >= 60 && isFirstChoice);
        bool criteria2 = (jambScore >= 200 && waecAverage >= 70);

        if (criteria1 || criteria2)
        {
            admissionStatus = "Admitted";
        }
        else
        {
            admissionStatus = "Pending";
        }
    }

    double scholarshipPercent = 0.0;
    double meritGrant = 0.0;
    int randomNum = 0;
    string grantStatus = "Not Applied";

    if (admissionStatus == "Admitted")
    {
        if (jambScore >= 320)
            scholarshipPercent = 0.30;
        else if (jambScore >= 280)
            scholarshipPercent = 0.20;
        else if (jambScore >= 240)
            scholarshipPercent = 0.10;
        else
            scholarshipPercent = 0.0;

        if (waecAverage >= 80 && isFirstChoice)
        {
            scholarshipPercent += 0.05;
        }

        if (scholarshipPercent > 0.35) 
            scholarshipPercent = 0.35;

        randomNum = rand() % 100 + 1;
        
        bool isPrime = (randomNum == 2 || randomNum == 3 || randomNum == 5 || randomNum == 7 || 
                        randomNum == 11 || randomNum == 13 || randomNum == 17 || randomNum == 19 || 
                        randomNum == 23 || randomNum == 29 || randomNum == 31 || randomNum == 37 || 
                        randomNum == 41 || randomNum == 43 || randomNum == 47 || randomNum == 53 || 
                        randomNum == 59 || randomNum == 61 || randomNum == 67 || randomNum == 71 || 
                        randomNum == 73 || randomNum == 79 || randomNum == 83 || randomNum == 89 || 
                        randomNum == 97);

        if (isPrime)
        {
            meritGrant = 50000.0;
            grantStatus = "Applied (N50,000)";
        }
        else
        {
            grantStatus = "Not Applied (Not Prime)";
        }
    }

    // Hostel Assignment
    double hostelFee = 0.0;
    string hostelName = "Not Applicable";

    if (admissionStatus == "Admitted")
    {
        if (hostelChoice == 1)
        {
            hostelName = "Main Hostel";
            hostelFee = MAIN_HOSTEL_FEE;
        }
        else if (hostelChoice == 2)
        {
            hostelName = "Annex Hostel";
            hostelFee = ANNEX_HOSTEL_FEE;
        }
        else
        {
            hostelName = "Day Student";
            hostelFee = 0.0;
        }
    }
    else if (admissionStatus == "Pending")
    {
        hostelName = "On Hold";
        hostelFee = 0.0;
    }
    else
    {
        hostelName = "Not Applicable";
        hostelFee = 0.0;
    }

    // Totals
    double scholarshipAmount = BASE_TUITION * scholarshipPercent;
    double tuitionAfterScholarship = BASE_TUITION - scholarshipAmount;
    double totalPayable = tuitionAfterScholarship + hostelFee - meritGrant;

    if (totalPayable < 0) totalPayable = 0;


    // Output
    cout << "\n=============================================" << endl;
    cout << "           ADMISSION DECISION SLIP           " << endl;
    cout << "=============================================" << endl;
    cout << "Name: " << fullName << endl;
    cout << "Admission Status: " << admissionStatus << endl;
    
    if (admissionStatus == "Admitted")
    {
        cout << fixed << setprecision(2);
        cout << "Scholarship: " << (scholarshipPercent * 100) << "% Tuition" << endl;
        cout << "After Scholarship: N" << tuitionAfterScholarship << endl;
        cout << "Hostel: " << hostelName << "  Fee: N" << hostelFee << endl;
        cout << "Random Draw: " << randomNum << "  Merit Grant: " << grantStatus << endl;
        cout << "---------------------------------------------" << endl;
        cout << "TOTAL PAYABLE: N" << totalPayable << endl;
    }
    else
    {
        cout << "Reason: " << (hasDisciplinaryRecord ? "Disciplinary Record. " : "") 
             << (age < 15 ? "Underage. " : "") 
             << "Please contact admissions office." << endl;
    }
    cout << "=============================================" << endl;

    return 0;
}