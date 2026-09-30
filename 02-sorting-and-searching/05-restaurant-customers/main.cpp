#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    vector<pair<int, int>> imos;
    for (int i = 0; i < n; i++) {
        imos.push_back({a[i], 1});
        imos.push_back({b[i], -1});
    }
    sort(imos.begin(), imos.end());
    int ans = 0, cnt = 0;
    for (int i = 0; i < 2 * n; i++) {
        cnt += imos[i].second;
        ans = max(ans, cnt);
    }
    cout << ans << '\n';
    return 0;
}
