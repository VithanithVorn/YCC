#include <iostream>
using namespace std;

int main()
{
    string name[4] = {"James","Sal", "Don", "Sam"};
    int scores[4];

    for ( int count = 0; count < 4; count += 1 )
    {   
        cout << "Enter score: " << endl;
        cin >> scores[count];
        
        cout << name[count] << "\n" << endl;
    }

    cout << "you can input only 4 scores";

    return 0;
}