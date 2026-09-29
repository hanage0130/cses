#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    auto f = [](long long x) -> long long {
        long long l = 1, r = 9, d = 1, ret = 0;
        while (l <= x) {
            ret += ((min(r, x)) - l + 1) * d;
            l *= 10;
            r = 10 * r + 9;
            d++;
        }
        return ret;
    };
    while (q--) {
        long long k;
        cin >> k;
        long long le = 0, ri = 1e17;
        while (ri - le > 1) {
            long long mid = (le + ri) / 2;
            if (k <= f(mid)) {
                ri = mid;
            } else {
                le = mid;
            }
        }
        cout << to_string(ri)[k - f(ri - 1) - 1] << '\n';
    }
    return 0;
}
