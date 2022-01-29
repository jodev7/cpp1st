// Fibonacci numbers

#include <iostream>

using namespace std;

int fib(int n) { //6
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2); // fib(5) + fib(4)
}

/*
fib(5) = fib(4) + fib(3)
fib(4) = fib(3) + fib(2)
fib(3) = fib(2) + fib(1)
fib(2) = 1
fib(1) = 1
*/


int main() {

	//cout << fib(6) << endl;

	int n;

	cout << "sonni kiriting :"; cin >> n;

	for (int i = 0; i <= n; i++) {
		cout << fib(i) << " ";
	}

	system("pause");
	return 0;
}