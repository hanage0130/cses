#include <bits/stdc++.h>
using namespace std;

int main() {
    auto f = [](long long y, long long x) -> long long {
        long long n = max(x, y);
        long long m = (n - 1) * (n - 1);
        if (n % 2 == 1) {
            if (y == n) {
                return m + x;
            } else {
                return m + n + (n - y);
            }
        } else {
            if (x == n) {
                return m + y;
            } else {
                return m + n + (n - x);
            }
        }
    };
    int t;
    cin >> t;
    while (t--) {
        int y, x;
        cin >> y >> x;
        cout << f(y, x) << '\n';
    }
    return 0;
}
