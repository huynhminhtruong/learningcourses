#include <iostream>
#include <math.h>
using namespace std;

bool isPerfectNumber(int n) {
	int sum = 0;

	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			sum += i + (n / i);
		}
	}

	return (sum == 2 * n);
}

int main() {
	int n, tmp;

	cin >> n;

	while (n > 0) {
		cin >> tmp;

		if (isPerfectNumber(tmp)) {
			cout << tmp << " is perfect" << endl;
		} else {
			cout << tmp << " not perfect" << endl;
		}

		n--;
	}

	return 0;
}
