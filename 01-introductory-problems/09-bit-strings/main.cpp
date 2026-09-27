#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 1;
    const int MOD = 1000000007;
    for (int i = 0; i < n; i++) {
        ans *= 2;
        ans %= MOD;
    }
    cout << ans << '\n';
    return 0;
}
