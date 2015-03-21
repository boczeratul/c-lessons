#include <iostream>
using namespace std;

int larger(int a, int b) {
	return (a > b) ? a : b;
}

int main(int argc, char **argv) {
	int a, b, c;

	cout << "I'm so smart I know how to add two numbers!!!" << endl;
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    c = larger(a, b);
    cout << "larger of a and b = " << c << endl;

    return 0;
}