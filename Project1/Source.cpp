// Recursion function

#include <iostream>

using namespace std;

int fact(int n) {
	if (n == 1)
		return 1;
	else
		return n * fact(n - 1);
}

int main() {

	int k = 5;

	cout << fact(k) << endl;
	

	system("pause");
	return 0;
}