#include <iostream>
using namespace std;

int main() {
    int gussNumber = 7;
    int tries = 0;
    int userNum;
    cout << "please guess the number between 1 & 10 " << endl;
    while (true) {

        if (tries < 3) {
            cin >> userNum;
            tries++;
            if (userNum == gussNumber) {
                cout << "you win! ";
                break;
            }else if (userNum > gussNumber) {
                if (tries < 3) {
                    cout << "the number is smaller "<< endl;
                    cout << tries << "tries, Try again: " << endl;
                    continue;
                }
            }else if (userNum < gussNumber) {
                if (tries < 3) {
                    cout << "the number is bigger "<< endl;
                    cout << tries << "tries, Try again: " << endl;
                    continue;
                }
            }
        }else {
            cout << "you lost your tries is: " << tries;
            break;
        }
        }


    return 0;
}
