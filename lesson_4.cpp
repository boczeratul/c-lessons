#include <iostream>
// #include <iomanip>
using namespace std;

int main(int argc, char **argv) {
	int n, sum = 0;

	cout << "I'm so smart I know how to add from 1 to n!!!" << endl;
    cout << "n = ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
    	sum += i;
    }

    cout << "1 + 2 + ... + " << n << " = " << sum << endl;
    // cout << setw(4) << 4 << setw(4) << 5 << endl;

    return 0;
}