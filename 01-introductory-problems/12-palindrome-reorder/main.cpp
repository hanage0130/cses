#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> cnt(26);
    for (int i = 0; i < n; i++) {
        cnt[s[i] - 'A']++;
    }
    string ans = s;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2 == 1) {
            if (n % 2 == 1) {
                ans[n / 2] = (char)('A' + i);
                cnt[i]--;
            } else {
                cout << "NO SOLUTION\n";
                exit(0);
            }
            break;
        }
    }
    int c = 0;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2 == 1) {
            cout << "NO SOLUTION\n";
            exit(0);
        }
        while (cnt[i] >= 1) {
            ans[c] = (char)('A' + i);
            ans[n - c - 1] = (char)('A' + i);
            c++;
            cnt[i] -= 2;
        }
    }
    cout << ans << '\n';
    return 0;
}
