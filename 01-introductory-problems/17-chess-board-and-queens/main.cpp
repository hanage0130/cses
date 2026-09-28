#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<char>> b(8, vector<char>(8));
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> b[i][j];
        }
    }
    vector<int> p(8);
    for (int i = 0; i < 8; i++) {
        p[i] = i;
    }
    int ans = 0;
    do {
        bool ok = true;
        for (int i = 0; i < 8; i++) {
            for (int j = i + 1; j < 8; j++) {
                if (i - p[i] == j - p[j]) {
                    ok = false;
                }
                if (i + p[i] == j + p[j]) {
                    ok = false;
                }
            }
        }
        for (int i = 0; i < 8; i++) {
            if (b[i][p[i]] == '*') {
                ok = false;
            }
        }
        if (ok) {
            ans++;
        }
    } while (next_permutation(p.begin(), p.end()));
    cout << ans << '\n';
    return 0;
}
