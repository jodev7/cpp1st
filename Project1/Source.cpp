// Encapsulation (data hiding)

#include <iostream>
#include <string>

using namespace std;

class BankAccaount {
private:
	int balance = 1000; //$
	string passport = "AC0000";

public:
	void deposit(string s, int b) {
		if (s == passport) {
			balance += b;
		}
	}

	void withdraw(string s, int b) {
		if (s == passport) {
			balance -= b;
		}
	}
};


int main() {

	BankAccaount Yusuf;

	Yusuf.deposit("AC0000", 4000);
	Yusuf.withdraw("AC0000", 2500);
	
	cout << Yusuf.balance << endl;

	system("pause");
	return 0;
}