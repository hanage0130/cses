#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, n;
    cin >> x >> n;
    multiset<int> ls;
    set<int> ps;
    ls.insert(x);
    ps.insert(0);
    ps.insert(x);
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        int rp = *ps.upper_bound(p);
        int lp = *prev(ps.upper_bound(p));
        ls.erase(ls.find(rp - lp));
        ls.insert(p - lp);
        ls.insert(rp - p);
        ps.insert(p);
        cout << *prev(ls.end()) << " \n"[i == n - 1];
    }
    return 0;
}
