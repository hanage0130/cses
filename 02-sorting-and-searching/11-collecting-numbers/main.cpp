#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<int> s;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (!s.contains(x - 1)) {
            ans++;
        }
        s.insert(x);
    }
    cout << ans << '\n';
    return 0;
}
