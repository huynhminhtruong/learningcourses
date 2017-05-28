#include <iostream>
using namespace std;

bool isOdd(int n) {
	return n & 1;
}

int main() {
	int i, x, y;

	cin >> x >> y;

	if (isOdd(x)) {
		i = x + 1;
	} else {
		i = x;
	}

	for (; i <= y; i += 2) {
		cout << i << endl;
	}

	return 0;
}
