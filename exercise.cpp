#include <iostream>
using namespace std;

int multiply(int x, int y) {
	return x * y;
}

int subtract(int x, int y ) {
	return x - y;
}

int main(int argc, char **argv) {
	int a, b, c, d;

	cout << "i o u" << endl;
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    d = subtract( multiply( a, b ), c );
    cout << "a * b - c = " << d << endl;

    return 0;
}