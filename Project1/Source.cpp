// N ta son ichida Min va Max algoritmi

#include <iostream>

using namespace std;



int main() {
	
	int min, max, n, number;

	cout << "N ga qiymat bering: "; cin >> n;

	cout << "1-son: "; cin >> number;

	min = number; max = number;

	for (int i = 0; i < n-1; i++) {
		cout << i + 2 << "-son:"; cin >> number;

		if (number < min) min = number;
		if (number > max) max = number;
	}

	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	

	system("pause");
	return 0;
}