#include <iostream>
using namespace std;
int main()
{
    bool state;
    char a;
    float num1;
    double num2;

    cout << "Enter: ";
    cin >> state;
    cin >> a;
    cin >> num1;
    cin >> num2;

    cout << "You entered: ";
    cout << boolalpha << state << endl;
    cout << a <<endl;
    cout << num1 <<endl;
    cout << num2 <<endl;

    return 0;
}