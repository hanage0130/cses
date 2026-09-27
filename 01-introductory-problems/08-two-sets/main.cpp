#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 4 != 0 && n % 4 != 3) {
        cout << "NO\n";
        exit(0);
    }
    vector<int> a, b;
    if (n % 2 == 0) {
        for (int i = 1; i <= n / 2; i++) {
            if (i % 2 == 0) {
                a.push_back(i);
                a.push_back(n - i + 1);
            } else {
                b.push_back(i);
                b.push_back(n - i + 1);
            }
        }
    } else {
        a.push_back(1);
        a.push_back(2);
        b.push_back(3);
        for (int i = 4; i <= (n + 3) / 2; i++) {
            if (i % 2 == 0) {
                a.push_back(i);
                a.push_back(n - (i - 3) + 1);
            } else {
                b.push_back(i);
                b.push_back(n - (i - 3) + 1);
            }
        }
    }
    cout << "YES\n";
    cout << a.size() << '\n';
    for (int i = 0; i < (int)a.size(); i++) {
        cout << a[i] << " \n"[i == (int)a.size() - 1];
    }
    cout << b.size() << '\n';
    for (int i = 0; i < (int)b.size(); i++) {
        cout << b[i] << " \n"[i == (int)b.size() - 1];
    }
    return 0;
}
