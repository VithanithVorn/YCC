#include <iostream>
using namespace std;
int main()
{
    int Length = 10; 
    int Width = 5;
    int Area = 0;
    int Perimeter = 0;

    Area = Length * Width;
    Perimeter = 2 * (Length + Width);

    cout << "Area: " << Area << endl;
    cout << "Perimeter: " << Perimeter << endl;
    
    return 0; 
}