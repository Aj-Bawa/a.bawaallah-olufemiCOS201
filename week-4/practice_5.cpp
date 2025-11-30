#include <iostream>
#include <string>
using namespace std;

int length_of_name(string name = "Steve")
{
    return name.length();
}

int main()
{
    cout << "The length of the name is equal to " << length_of_name() << endl;
    cout << "The length of the name is equal to " << length_of_name("Chinonso");
}