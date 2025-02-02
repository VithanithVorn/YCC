#include <iostream>
using namespace std;

int main() 
{
    string Name;
    int Studentid, Age;

    cout << "Enter your Student ID, Names, and Age: \n";
    cin >> Studentid >> Name >> Age;

    cout << "Student ID: " << Studentid << "\n";
    cout << "Name: " << Name << "\n";
    cout << "Age: " << Age << "\n";

    return 0;
}