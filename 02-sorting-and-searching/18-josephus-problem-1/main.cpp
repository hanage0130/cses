#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<int> deq;
    for (int i = 1; i <= n; i++) {
        deq.push_back(i);
    }
    while ((int)deq.size() >= 2) {
        cout << deq[1] << ' ';
        deq.push_back(deq.front());
        deq.pop_front();
        deq.pop_front();
    }
    cout << deq[0] << '\n';
}
