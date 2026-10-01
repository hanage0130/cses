#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> k(n);
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    set<int> s;
    int ans = 0;
    for (int i = 0, j = 0; i < n; i++) {
        while (j < n && !s.contains(k[j])) {
            s.insert(k[j]);
            j++;
        }
        ans = max(ans, (int)s.size());
        s.erase(k[i]);
    }
    cout << ans << '\n';
    return 0;
}
