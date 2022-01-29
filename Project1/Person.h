#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	Person();
	~Person();

	void setName(string str);
	string getName();

private:
	string name;
};

