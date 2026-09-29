#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    const int inf = 1e9;
    vector<vector<int>> dist(n, vector<int>(n, inf));
    dist[0][0] = 0;
    queue<pair<int, int>> que;
    que.push({0, 0});
    while (!que.empty()) {
        auto [cx, cy] = que.front();
        que.pop();
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 4; j++) {
                int nx = cx + (i == 0 ? 1 : 2) * (j & 1 ? 1 : -1);
                int ny = cy + (i == 0 ? 2 : 1) * (j & 2 ? 1 : -1);
                if (nx < 0 || nx >= n || ny < 0 || ny >= n) {
                    continue;
                }
                if (dist[nx][ny] != inf) {
                    continue;
                }
                dist[nx][ny] = dist[cx][cy] + 1;
                que.push({nx, ny});
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << dist[i][j] << " \n"[j == n - 1];
        }
    }
    return 0;
}
