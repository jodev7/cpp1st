// Class - OOP

#include <iostream>

using namespace std;

//public, private, protected
class Person {
public:
	void sayHi() {
		cout << "Hello" << endl;
	}
};

int main() {

	Person Yusuf;

	Yusuf.sayHi();
	
	system("pause");
	return 0;
}