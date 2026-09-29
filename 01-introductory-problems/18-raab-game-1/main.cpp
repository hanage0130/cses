#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    if (a + b > n || ((a * b == 0) && (a + b >= 1))) {
        cout << "NO\n";
        return;
    }
    vector<int> ca, cb;
    for (int i = 1; i <= a; i++) {
        ca.push_back(b + i);
        cb.push_back(i);
    }
    for (int i = 1; i <= b; i++) {
        ca.push_back(i);
        cb.push_back(a + i);
    }
    for (int i = a + b + 1; i <= n; i++) {
        ca.push_back(i);
        cb.push_back(i);
    }
    cout << "YES\n";
    for (int i = 0; i < n; i++) {
        cout << ca[i] << " \n"[i == n - 1];
    }
    for (int i = 0; i < n; i++) {
        cout << cb[i] << " \n"[i == n - 1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
