#include <iostream>
using namespace std;
int main()
{
    int score;
    
    cout << " enter score: ";
    cin >> score;

    if (score >= 96 && score <= 100)
    {cout << "Grade: AA";}
    
    else if (score >= 91 && score <= 95)
    {cout << "Grade: BA";}
   
    else if (score >= 87 && score <= 90)
    {cout << "Grade: BB";}
    
    else if (score >= 80 && score <= 86)
    {cout << "Grade: CB";}
    
    else if (score >= 71 && score <= 79)
    {cout << "Grade: CC";}
    
    else if (score >= 51 && score <= 70)
    {cout << "Grade: DC";}
        
    else if (score >= 31 && score <= 50)
    {cout << "Grade: DD";}

    else if (score >= 1 && score <= 30)
    {cout << "Grade: F";}
        
    else {cout << "NP";}
        
    return 0;
}