#include <iostream>
using namespace std;

int isMin(int a, int b) {
	if (a < b) {
		return a;
	}

	return b;
}

int main() {
	int a, b, c, r;

	cin >> a >> b >> c;

	if (isMin(a, b) - a == 0) {
		r = b;
	} else {
		r = a;
	}

	cout << isMin(isMin(a, b), c) << " " << isMin(a, b) << " " << r << endl;

	return 0;
}
