#include <iostream>
#include <math.h>
using namespace std;

bool isPerfectNumber(int n) {
	int sum = 0;

	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0 && (i != (n / i))) {
			sum += i + (n / i);
		}
	}

	return (sum == 2 * n);
}

int main() {
	int n, i = 1;

	cin >> n;

	while (i < n) {
		if (isPerfectNumber(i)) {
			cout << i << " ";
		}

		i++;
	}

	return 0;
}
