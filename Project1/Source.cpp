// Function & Array

#include <iostream>

using namespace std;

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i ++ ) {
		cout << ++arr[i] << endl;
	}
}

int main() {

	int myarr[3] = { 1,2,3 };
	printArray(myarr, 3);
	
	system("pause");
	return 0;
}