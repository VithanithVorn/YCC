#include <iostream>
using namespace std;

int main()
{
    int num;
    
    cout << "1. New Game\n" << "2. Settings\n" << "3. Exit\n";
    cin >> num;

    switch (num)
    {
    
        case 1:
        cout << "New Game started\n";
        break;

        case 2:
        cout << "Setting\n";
        break;

        case 3:
        cout << "Exit\n";
        break;

        default:
        cout << "Not found\n";
        break;
    
    }

return 0;

}