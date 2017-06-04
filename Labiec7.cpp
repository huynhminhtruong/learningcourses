#include <iostream>
using namespace std;

string printSymbol(char s, int n) {
	int i = 0;
	string line = "";

	for (; i < n; i++) {
		line += s;
	}

	return line;
}

int main() {
	int n, i = 1;

	cin >> n;

	for (; i <= n; i++) {
		cout << printSymbol(' ', n - i);
		cout << printSymbol('*', 2 * i - 1);
		cout << "\n";
	}

	return 0;
}
