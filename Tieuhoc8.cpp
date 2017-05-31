#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("Tieuhoc8.inp", "r", stdin);
    int n, a, b, x;
    scanf("%d", &n);
    while(n > 0) {
        cin >> a >> b;
        x = 1;
        while(x * x <= b) {
            if (x * x >= a) {
                cout << x * x << " ";
            }
            x++;
        }
        cout << "\n";
        n--;
    }
    return 0;
}
