#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    int ans = 0;
    for (int i = n - 1, j = 0; i >= 0 && j <= i; i--) {
        if (i == j) {
            ans++;
        } else if (p[j] + p[i] <= x) {
            ans++;
            j++;
        } else {
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}
