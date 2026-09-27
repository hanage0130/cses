#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION\n";
        exit(0);
    }
    vector<int> ans(n);
    int cnt = 0;
    for (int i = 1; i < n; i += 2) {
        ans[i] = ++cnt;
    }
    for (int i = 0; i < n; i += 2) {
        ans[i] = ++cnt;
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " \n"[i == n - 1];
    }
    return 0;
}
