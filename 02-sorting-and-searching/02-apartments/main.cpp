#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 0;
    for (int i = 0, j = 0; i < n; i++) {
        while (j < m && b[j] <= a[i] + k) {
            if (a[i] - k <= b[j]) {
                ans++;
                j++;
                break;
            }
            j++;
        }
    }
    cout << ans << '\n';
    return 0;
}
