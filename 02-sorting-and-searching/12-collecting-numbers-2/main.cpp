#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // unsolved
    int n, m;;
    cin >> n >> m;;
    vector<int> v(n + 1), idx(n + 1, -1);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (idx[x - 1] == -1) {
            ans++;
        }
        idx[x] = i;
        v[i] = x;
    }
    cout << ans << '\n';
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        int x = v[a], y = v[b];
        ans -= (idx[x - 1] > a ? 1 : 0);
        ans -= (idx[x] > idx[x + 1] ? 1 : 0);
        ans -= (idx[y - 1] > b ? 1 : 0);
        ans -= (idx[y] > idx[y + 1] ? 1 : 0);
        swap(v[a], v[b]);
        swap(idx[x], idx[y]);
        swap(x, y);
        ans += (idx[x - 1] > a ? 1 : 0);
        ans += (idx[x] > idx[x + 1] ? 1 : 0);
        ans += (idx[y - 1] > b ? 1 : 0);
        ans += (idx[y] > idx[y + 1] ? 1 : 0);
        cout << ans << '\n';
    }
    return 0;
}
