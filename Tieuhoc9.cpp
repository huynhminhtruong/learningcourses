#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

bool isOdd(int n) {
    return (n & 1);
}

bool isPerfectNumber(int n) {
    if (n % 4 == 2 || n % 3 == 2) return false;

    if (isOdd(n) && (n % 8) != 1) return false;

    return true;
}

int main()
{
    freopen("Tieuhoc9.inp", "r", stdin);
    int n, x;
    scanf("%d", &n);

    while(n > 0) {
        cin >> x;
        if (isPerfectNumber(x)) cout << sqrt(x) << endl;
        else cout << 0 << endl;
        n--;
    }

    return 0;
}
