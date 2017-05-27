#include <iostream>
using namespace std;

string level(float score) {
	if (score >= 9) {
		return "Xuat sac";
	}

	if (score >= 8 && score < 9) {
		return "Gioi";
	}

	if (score >= 7 && score < 8) {
		return "Kha";
	}

	if (score >= 6 && score < 7) {
		return "TBKha";
	}

	if (score >= 5 && score < 6) {
		return "Tbinh";
	}

	return "Yeu";
}

int main() {
	float score;

	cin >> score;

	cout << level(score) << endl;

	return 0;
}
