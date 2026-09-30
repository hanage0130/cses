#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> h(n), t(m);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> t[i];
    }
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++) {
        p.push_back({h[i], -1});
    }
    for (int i = 0; i < m; i++) {
        p.push_back({t[i], i});
    }
    sort(p.begin(), p.end());
    vector<int> ans(m, -1);
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = n + m - 1; i >= 0; i--) {
        auto [x, j] = p[i];
        if (j == -1) {
            if (!pq.empty()) {
                ans[pq.top()] = x;
                pq.pop();
            }
        } else {
            pq.push(j);
        }
    }
    for (int i = 0; i < m; i++) {
        cout << ans[i] << '\n';
    }
    return 0;
}
