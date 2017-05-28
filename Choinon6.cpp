#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("input.INP", "r", stdin);
    int a, b, s;

    scanf("%d %d", &a, &b);

    if (a > 40) {
        s = (a - 40) * (2 * b) + 40 * b;
    } else {
        s = a * b;
    }

    cout << s << endl;

    return 0;
}
