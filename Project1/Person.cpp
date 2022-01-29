#include <iostream>
#include <string>
#include "Person.h"



Person::Person() {
	cout << "Constructor" << endl;
}

Person::~Person() {
	cout << "Destructor" << endl;
}

// :: scope resolution operator
void Person::setName(string a) {
	name = a;
}

string Person::getName() {
	return name;
}