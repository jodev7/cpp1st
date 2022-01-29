// sizeof

#include <iostream>

using namespace std;



int main() {
	
	cout << "char: " << sizeof(char) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << "short int: " << sizeof(short int) << endl;
	cout << "long int: " << sizeof(long int) << endl;
	cout << "long double: " << sizeof(long double) << endl;
	cout << "long long int: " << sizeof(long long int) << endl;


	double arr[20]; //160 bite
	cout << sizeof(arr) << endl;


	system("pause");
	return 0;
}