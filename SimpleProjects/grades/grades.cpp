#include <iostream>
using namespace std;



int main ()
{
    int score;
    cout << "Enter your scores: ";
    cin >> score;
    

    if (score >= 90 && score <= 100)
    cout << "your grade is A";
    else if (score >= 80 && score < 90)
    cout << "your grade is B";
    else if (score >= 70 && score < 80)
    cout << "your grade is C";
    else if (score >= 60 && score < 70)
    cout << "your grade is D";
    else if (score < 60)
    cout << "your grade is F";
    else 
    cout << "Wrong value!";
    return 0;
}
