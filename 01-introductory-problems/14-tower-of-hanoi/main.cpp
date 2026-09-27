#include <bits/stdc++.h>
using namespace std;

int main() {
    auto hanoi = [](auto hanoi, int n, int from, int to, int via) -> void {
        if (n == 0) {
            return;
        }
        hanoi(hanoi, n - 1, from, via, to);
        cout << from << ' ' << to << '\n';
        hanoi(hanoi, n - 1, via, to, from);
    };
    int n;
    cin >> n;
    cout << (1 << n) - 1 << '\n';
    hanoi(hanoi, n, 1, 3, 2);
    return 0;
}
