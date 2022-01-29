#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	Person(); //constructor
	~Person(); // destructor

	void setName(string str);
	string getName();

private:
	string name;
};

