#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<int> s;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        auto ub = s.upper_bound(k);
        if (ub == s.end()) {
            ans++;
        } else {
            int x = *ub;
            s.erase(s.find(x));
        }
        s.insert(k);
    }
    cout << ans << '\n';
    return 0;
}
