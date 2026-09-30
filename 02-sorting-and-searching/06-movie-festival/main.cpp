#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> ba(n);
    for (int i = 0; i < n; i++) {
        cin >> ba[i].second >> ba[i].first;
    }
    sort(ba.begin(), ba.end());
    int r = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        if (r <= ba[i].second) {
            ans++;
            r = ba[i].first;
        }
    }
    cout << ans << '\n';
    return 0;
}
