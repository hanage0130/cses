#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size();
    vector<int> cnt(26);
    for (int i = 0; i < n; i++) {
        cnt[s[i] - 'A']++;
    }
    int prv = -1;
    string ans;
    for (int i = 0; i < n; i++) {
        int nprv = -1;
        for (int j = 0; j < 26; j++) {
            if (cnt[j] > (n - i) / 2 && prv != j) {
                cnt[j]--;
                nprv = j;
                ans += (char)('A' + j);
            }
        }
        if (nprv != -1) {
            prv = nprv;
            continue;
        }
        for (int j = 0; j < 26; j++) {
            if (cnt[j] >= 1 && prv != j) {
                cnt[j]--;
                nprv = j;
                ans += (char)('A' + j);
                break;
            }
        }
        prv = nprv;
    }
    if ((int)ans.size() != n) {
        cout << -1 << '\n';
    } else {
        cout << ans << '\n';
    }
    return 0;
}
