#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    long long ans = 1e18;
    for (int i = 0; i < (1 << n); i++) {
        long long sum1 = 0, sum2 = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                sum1 += p[j];
            } else {
                sum2 += p[j];
            }
        }
        ans = min(ans, abs(sum1 - sum2));
    }
    cout << ans << '\n';
    return 0;
}
