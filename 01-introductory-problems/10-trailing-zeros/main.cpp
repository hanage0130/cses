#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 1, ans = 0;
    while (a <= n / 5) {
        a *= 5;
    }
    while (a >= 5) {
        ans += n / a;
        a /= 5;
    }
    cout << ans << '\n';
    return 0;
}
