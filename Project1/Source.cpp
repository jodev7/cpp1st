// Constructor

#include <iostream>
#include <string>

using namespace std;

class MyClass {
public:
	MyClass(string str) {
		setName(str);
	}

	void setName(string s) {
		name = s;
	}

	string getName() {
		return name;
	}

private:
	string name = "Yusuf";
};

int main() {

	MyClass k("Joseph");

	cout << k.getName() << endl;

	system("pause");
	return 0;
}