//SHARTSIZ O`TISH OPERATORI

#include <iostream>

using namespace std;

int main() {
	/*
	int n;
    metka: cout << "Musbat son kiriting = "; cin >> n;

	if (n > 0) cout << "Qabul qilindi" << endl;
	else goto metka;
	*/

	int n, m;
    metka: 
	    cout << "Son kiriting. 1 =  "; cin >> n;
		cout << "Son kiriting. 2 =  "; cin >> m;



	if (m != 0) cout << n / m << endl;
	else {
		cout << "Bo`luvchi 0 ga teng bo`lishi mumkin emas" << endl;
		goto metka;
	}

	system("pause");
	return 0;
}