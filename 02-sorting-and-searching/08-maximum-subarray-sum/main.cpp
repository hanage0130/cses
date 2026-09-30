#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long long ans = LLONG_MIN, sum = 0, mn = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        ans = max(ans, sum - mn);
        mn = min(mn, sum);
    }
    cout << ans << '\n';
    return 0;
}
