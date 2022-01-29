#include <iostream>
#include <string>
#include "Person.h"



Person::Person() {

}

Person::~Person() {

}

// :: scope resolution operator
void Person::setName(string a) {
	name = a;
}

string Person::getName() {
	return name;
}