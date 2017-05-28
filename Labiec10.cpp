#include <iostream>
using namespace std;

int GCD(int a, int b) {
    int remain;

    if (a < b) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }

    while (b > 0) {
        remain = a % b;
        a = b;
        b = remain;
    }

    return a;
}

int main()
{
    int x, y;

    cin >> x >> y;

    cout << GCD(x, y) << endl;
    cout << (x * y) / GCD(x, y) << endl;
    return 0;
}
