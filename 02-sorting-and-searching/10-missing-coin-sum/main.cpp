#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    long long r = 0;
    for (int i = 0; i < n; i++) {
        if (x[i] > r + 1) {
            cout << r + 1 << '\n';
            return 0;
        }
        r += x[i];
    }
    cout << r + 1 << '\n';
    return 0;
}
