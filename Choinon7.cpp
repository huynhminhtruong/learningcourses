#include <iostream>
#include <math.h>
using namespace std;

bool isTriangle(int a, int b, int c) {
	if (a >= b + c || b >= a + c || c >= a + b) {
		return false;
	}

	return true;
}

float calculateArea(int a, int b, int c) {
	float p;

	p = (float) (a + b + c) / 2;

	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
	int a, b, c;

	cin >> a >> b >> c;

	if (isTriangle(a, b, c)) {
		cout << calculateArea(a, b, c) << endl;
	} else {
		cout << "Khong phai la tam giac" << endl;
	}

	return 0;
}
