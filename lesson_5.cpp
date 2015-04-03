#include <iostream>
using namespace std;

int fibonacci(int n) {
	if (n == 1 || n == 2) {
		return 1;
	} else {
		return fibonacci(n-1) + fibonacci(n-2);
	} 
}

int main(int argc, char **argv) {
	int n;
	cout << "I'll give you n-th term of Fibonacci series!" << endl;

	cout << "n = ";
	cin >> n;

	cout << n << "th term of Fibonacci series is " << fibonacci(n) << endl;
    return 0;
}