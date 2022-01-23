//TANLASH OPERATORI 1

#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Hafta kuni sonni yozing = "; cin >> n;

	/*
	switch (n) {
	case 1: cout << "Dushanba" << endl; break;
	case 2: cout << "Seshanba" << endl; break;
	case 3: cout << "Chorshanba" << endl; break;
	case 4: cout << "Payshanba" << endl; break;
	case 5: cout << "Juma" << endl; break;
	case 6: cout << "Shanba" << endl; break;
	case 7: cout << "Yakshanba" << endl; break;
	default: cout << "Bunday hafta kuni mavjud emas" << endl;
	}
	*/

	
	/*
	switch (n) {
	case 1: case 2: case 3: cout << "Qish" << endl; break;
	case 4: case 5: case 6: cout << "Bahor" << endl; break;
	case 7: case 8: case 9: cout << "Yoz" << endl; break;
	case 10: case 11: case 12: cout << "Kuz" << endl; break;
	}
	*/
	
	//n > 0 ? cout << "manfiy" << endl : cout << "musbat" << endl;

	n % 2 ==0 ? cout << "juft son" << endl : cout << "toq son" << endl;

	system("pause");
	return 0;
}