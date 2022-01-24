

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int min(int a, int b) {
	if (a < b) return a;
	else return b;
}

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}

int main() {
	
	int n, m;

	cout << "N ga qiymat bering: "; cin >> n;
	cout << "M ga qiymat bering: "; cin >> m;

	cout << "Min: " << min(n, m) << endl;
	cout << "Max: " << max(n, m) << endl;

	/*
	//WHILE TAKRORLASH OPERATORI

	int x, a = -1;
	srand(time(NULL));
	x = rand() % 100 + 1;
	
	while (a != x) {

		cout << "O`ylagan sonni kiriting: "; cin >> a;


		if (a > x) cout << "O`ylangan sondan katta sonni kiritdingiz" << endl;
		else if (a < x) cout << "O`ylangan sondan kichik sonni kiritdingiz" << endl;
		else {
			cout << "Siz sonni topdingiz" << endl;
			break;
		}
	}
	*/

	system("pause");
	return 0;
}