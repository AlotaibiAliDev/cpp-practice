#include <iostream>
using namespace std;


int main ()
{
    // Take the values
    int num1, num2, operation;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operation 1 is +, 2 is -, 3 is x, 4 is / \n";
    cin >> operation;
    cout << "Enter the second number: ";
    cin >> num2;


    // s
    if (operation == 1)
    cout << num1 + num2;
    else if (operation == 2)
    cout << num1 - num2;
    else if (operation == 3)
    cout << num1 * num2;
    else if (operation == 3)
    cout << num1 / num2;
    else
    cout << "Try again! ";
    return 0;
}