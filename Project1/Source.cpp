// Function overloading

#include <iostream>

using namespace std;

void printNumber(int n) {
	cout << n << endl;
}

void printNumber(float n) {
	cout << n << endl;
}

int main() {

	int k = 5;
	float b = 10.5;
	printNumber(k);
	printNumber(b);

	system("pause");
	return 0;
}