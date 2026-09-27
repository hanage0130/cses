#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (b > a) {
            swap(a, b);
        }
        int x = a - b;
        a -= 2 * x;
        b -= x;
        if (a >= 0 && a % 3 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
