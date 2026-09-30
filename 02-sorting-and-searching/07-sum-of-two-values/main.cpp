#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    map<int, int> idx;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (idx.contains(x - a)) {
            cout << idx[x - a] + 1 << " " << i + 1 << '\n';
            exit(0);
        }
        idx[a] = i;
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}
