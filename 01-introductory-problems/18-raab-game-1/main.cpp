#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    if (a + b > n || abs(a - b) >= 2 || ((a == 0 && b >= 1) || (b == 0 && a >= 1))) {
        cout << "NO\n";
        return;
    }
    int c = 1;
    vector<int> ca, cb;
    if (a > b) {
        ca.push_back(2);
        ca.push_back(3);
        ca.push_back(1);
        cb.push_back(1);
        cb.push_back(2);
        cb.push_back(3);
        a -= 2;
        b--;
        c = 4;
    } else if (b > a) {
        ca.push_back(1);
        ca.push_back(2);
        ca.push_back(3);
        cb.push_back(2);
        cb.push_back(3);
        cb.push_back(1);
        a--;
        b -= 2;
        c = 4;
    }
    while (a == b && a >= 1) {
        ca.push_back(c);
        cb.push_back(c + 1);
        ca.push_back(c + 1);
        cb.push_back(c);
        c += 2;
        a--;
        b--;
    }
    while (c <= n) {
        ca.push_back(c);
        cb.push_back(c);
        c++;
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
