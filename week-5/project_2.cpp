#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    if (numStudents <= 0)
    {
        cout << "Invalid number of students." << endl;
        return 0;
    }

    vector<int> scores(numStudents);
    int best = -1;

    cout << "Enter " << numStudents << " scores: ";
    for (int i = 0; i < numStudents; i++)
    {
        cin >> scores[i];
        
        if (scores[i] > best)
        {
            best = scores[i];
        }
    }

    for (int i = 0; i < numStudents; i++)
    {
        char grade;
        int s = scores[i];

        if (s >= best - 10)
            grade = 'A';
        else if (s >= best - 20)
            grade = 'B';
        else if (s >= best - 30)
            grade = 'C';
        else if (s >= best - 40)
            grade = 'D';
        else
            grade = 'F';

        cout << "Student " << i << " score is " << s << " and grade is " << grade << endl;
    }

    return 0;
}