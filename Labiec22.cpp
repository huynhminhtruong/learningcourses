#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    freopen("input.INP", "r", stdin);
    int n, x, i, tmp1, tmp2;
    vector<int> myvector;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        cin >> x;
        myvector.push_back(x);
    }

    tmp1 = myvector[0];
    tmp2 = myvector[0];

    for (i = 1; i < n; i++) {
        if (myvector[i] < tmp1) {
            tmp1 = myvector[i];
        }

        if (myvector[i] > tmp2) {
            tmp2 = myvector[i];
        }
    }

    cout << "So lon nhat la: " << tmp2 << endl;
    cout << "So nho nhat la: " << tmp1 << endl;

    return 0;
}
