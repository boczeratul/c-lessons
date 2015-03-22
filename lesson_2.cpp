#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int main(int argc, char **argv) {
	int a, b, c;

	cout << "I'm so smart I know how to add two numbers!!!" << endl;
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    c = add(a, b);
    cout << "a + b = " << c << endl;

    return 0;
}