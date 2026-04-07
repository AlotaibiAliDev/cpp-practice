#include <iostream>
using namespace std;



int main ()
{
    int num1, num2;
    cout << "enter num1: ";
    cin >> num1;
    cout << "enter num2: ";
    cin >> num2;

    if (num1 > num2)
    cout << "the num1 is greater! ";
    else if (num2 > num1)
    cout << "the num2 is greater! ";
    else 
    cout << "the numbers is equal";
    return 0;
}
