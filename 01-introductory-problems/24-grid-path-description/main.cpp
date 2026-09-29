#include <bits/stdc++.h>
using namespace std;

string s;
string d = "DULR";
vector<int> dx = {1, -1, 0, 0};
vector<int> dy = {0, 0, -1, 1};
int ans = 0;
bool seen[7][7];

bool valid(int x, int y) {
    return 0 <= x && x < 7 && 0 <= y && y < 7 && !seen[x][y];
}

void f(int k, int x, int y) {
    if (k == 48) {
        if (x == 6 && y == 0) {
            ans++;
        }
        return;
    }
    if (x == 6 && y == 0) {
        return;
    }

    if (valid(x + 1, y) && valid(x - 1, y) && !valid(x, y - 1) && !valid(x, y + 1)) {
        return;
    }
    if (!valid(x + 1, y) && !valid(x - 1, y) && valid(x, y - 1) && valid(x, y + 1)) {
        return;
    }

    for (int i = 0; i < 4; i++) {
        if (s[k] == '?' || s[k] == d[i]) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (!valid(nx, ny)) {
                continue;
            }
            seen[nx][ny] = true;
            f(k + 1, nx, ny);
            seen[nx][ny] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            seen[i][j] = false;
        }
    }
    seen[0][0] = true;
    f(0, 0, 0);
    cout << ans << '\n';
    return 0;
}