#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    string t = "BCDA";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            s[i][j] = t[s[i][j] - 'A'];
            char a = (i > 0 ? s[i - 1][j] : '?');
            char b = (j > 0 ? s[i][j - 1] : '?');
            while (s[i][j] == a || s[i][j] == b) {
                s[i][j] = t[s[i][j] - 'A'];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << s[i] << '\n';
    }
    return 0;
}
