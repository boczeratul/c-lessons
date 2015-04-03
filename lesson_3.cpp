#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    int guess, answer = 3;
    cout << "guess a number!" << endl;

    while(true) {
        cout << "your guess: ";
        cin >> guess;

        if (guess == answer) {
            cout << "you got it!" << endl;
            break; 
        } else {
            cout << "wrong! try again" << endl;
        }
    }
    return 0;
}