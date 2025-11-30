#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main()
{
    cout << "--- 1. Concatenation ---" << endl;
    
    char str1[50] = "Hello ";
    char str2[] = "World!";
    strcat(str1, str2);
    cout << "strcat result: " << str1 << endl;

    char str3[50] = "Welcome to ";
    char str4[] = "C++ Programming";
    strncat(str3, str4, 3); 
    cout << "strncat result: " << str3 << endl << endl;

    cout << "--- 2. Comparison (strcmp) ---" << endl;
    
    char s1[] = "Apple";
    char s2[] = "Apple";
    char s3[] = "Banana";

    int result1 = strcmp(s1, s2);
    int result2 = strcmp(s1, s3);
    int result3 = strcmp(s3, s1);

    if (result1 == 0)
        cout << s1 << " is equal to " << s2 << endl;
    else
        cout << s1 << " is not equal to " << s2 << endl;

    if (result2 < 0)
        cout << s1 << " comes before " << s3 << " (Result: " << result2 << ")" << endl;
    
    if (result3 > 0)
        cout << s3 << " comes after " << s1 << " (Result: " << result3 << ")" << endl << endl;

    cout << "--- 3. Conversion ---" << endl;

    char numStr1[] = "12345";
    char numStr2[] = "3.14159";

    int numInt = atoi(numStr1);
    double numDouble = atof(numStr2);

    cout << "String \"" << numStr1 << "\" converted to int: " << numInt << endl;
    cout << "String \"" << numStr2 << "\" converted to double: " << numDouble << endl;
    cout << "Calculation test: " << numInt << " + 10 = " << (numInt + 10) << endl;

    char buffer[50];
    int age = 25;
    sprintf(buffer, "I am %d years old", age); 
    cout << "Number converted to string: " << buffer << endl;

    return 0;
}