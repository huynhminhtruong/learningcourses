#include <iostream>
using namespace std;

int h;

string printSymbol(char s, int n) {
	int i = 0;
	string line = "";

	for (; i < n; i++) {
		line += s;
	}

	return line;
}

string printSymbol2(int n, int i) {
	string line = "";

	cout << printSymbol(' ', n);
	cout << '*';
	cout << printSymbol(' ', i);
	cout << '*';

	return line;
}

void printFullTriangle(int h) {
	int i = 1;

	for (; i <= h; i++) {
		cout << printSymbol(' ', h - i);
		cout << printSymbol('*', 2 * i - 1);
		cout << "\n";
	}
}

void printEmptyCenterTriangle(int h, int i) {
	for (i = 1; i <= h; i++) {
		if (i > 1 && i < h) {
			cout << printSymbol2(h - i, 2 * i - 3);
		} else {
			cout << printSymbol(' ', h - i);
			cout << printSymbol('*', 2 * i - 1);
		}

		cout << "\n";
	}
}

int main() {
	int i = 1;

	cin >> h;

	return 0;
}
