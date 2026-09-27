#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << (long long)i * i * ((long long)i * i - 1) / 2 - (long long)(i - 1) * max(i - 2, 0) * 4 << '\n';
    }
    return 0;
}
