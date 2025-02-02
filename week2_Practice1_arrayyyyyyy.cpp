#include <iostream>
using namespace std;

int main()
{
    int scores[4] = {78, 87, 99, 75};
    int Jing = 0;
    int lenght = size(scores);

    for (int count = 0; count < lenght; count += 1)
    {Jing += scores[count];} 

    cout << "The total: " << Jing << endl;
    cout << "The average: " << Jing/lenght << endl;

    return 0;
}