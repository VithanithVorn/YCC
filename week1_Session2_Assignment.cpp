#include <iostream>
using namespace std;
int main()
{
    int score;
    int count = 0;
    
    cout << "Enter a score:\n";
    
    while ( count < 5)
    {
        cin >> score;

        if ( score >= 50 )
        {count += 1;}
    }
    cout << "program let user input only their 5 score.";
    
    return 0;
}