#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<int>> ans(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            vector<bool> mex(2 * n);
            for (int k = 0; k < i; k++) {
                mex[ans[k][j]] = true;
            }
            for (int k = 0; k < j; k++) {
                mex[ans[i][k]] = true;
            }
            int pos = 0;
            while (mex[pos]) {
                pos++;
            }
            ans[i][j] = pos;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ans[i][j] << " \n"[j == n - 1];
        }
    }
    return 0;
}
