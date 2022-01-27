// Dynamic Memory

#include <iostream>

using namespace std;



int main() {
	
	int a;

	int* p = NULL;

	p = new int;
	*p = 5;

	delete p;

	//array

	int* b = NULL;

	b = new int[5];

	delete[] b;

	system("pause");
	return 0;
}