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

string printSymbol2(char s1, char s2, int n) {
	string line = "";

	cout << printSymbol(s1, n);
	cout << s2;
	cout << printSymbol(s1, h - (2 * n - 1));
	cout << s2;

	return line;
}

int main() {
	int i = 1;

	cin >> h;

	for (; i <= h; i++) {
		cout << printSymbol(' ', h - i);
		cout << printSymbol('*', 2 * i - 1);
		cout << "\n";
	}

	for (i = 1; i <= h; i++) {
		if (i > 1 && i < h) {
			cout << printSymbol2(' ', '*', h - i);
		} else {
			cout << printSymbol(' ', h - i);
			cout << printSymbol('*', 2 * i - 1);
		}

		cout << "\n";
	}

	return 0;
}
