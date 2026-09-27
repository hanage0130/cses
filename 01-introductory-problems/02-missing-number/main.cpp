#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = n;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != i + 1) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}
