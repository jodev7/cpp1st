// Abstraction - OOP

#include <iostream>

using namespace std;

//
class BankAccount {
	int balance = 1000;
public:
	int myBalance() {
		return balance * 9500;
	}
};

int main() {

	BankAccount k;

	cout << k.myBalance() << endl;
	
	
	system("pause");
	return 0;
}