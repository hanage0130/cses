#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += p[i];
    }
    sort(p.begin(), p.end());
    long long ans = sum, lsum = 0;
    for (int i = 0; i < n; i++) {
        lsum += p[i];
        long long cost = ((long long)(i + 1) * p[i] - lsum) + ((sum - lsum) - (long long)(n - i - 1) * p[i]);
        ans = min(ans, cost);
    }
    cout << ans << '\n';
    return 0;
}
