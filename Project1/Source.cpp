// destructor

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;



int main() {

	Person *Yusuf = new Person();

	Yusuf->setName("Yusuf");

	cout << Yusuf->getName() << endl;

	delete Yusuf;

	system("pause");
	return 0;
}