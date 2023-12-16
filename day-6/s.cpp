#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> v(n, 0);
    int curA = 1;
    int curB = 1000000;
    int mx = 0;

    for (int i = 0; i < n; ++i) {
        int x = abs(curA - a[i]);
        int y = abs(curB - a[i]);

        mx = max(mx, min(x, y));
    }

    cout << mx << endl;

    return 0;
}
