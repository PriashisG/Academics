#include <bits/stdc++.h>
using namespace std;
    // Typedef
typedef long long ll;
    // Macros
#define PB push_back
#define all(x) x.begin(), x.end()
#define trav(i, a) for (auto &i : a)
#define F first
#define S second
#define endl '\n'
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define REP(i, a, b) for (int i = a; i <= b; i++)

void fast() {
    ios::sync_with_stdio(false);
    cin.tie(0);
}
void solve(ll tc){
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<char>> v(n + 1 ,vector<char>(m + 1, ' '));
    REP(i, 1, n){
        REP(j, 1, m) cin >> v[i][j];
    }
    vector<vector<int>> pre(n + 1 ,vector<int>(m + 1, 0));
    REP(i, 1, n){
        REP(j, 1, m){
            if (v[i][j] == 'g') pre[i][j] = 1;
        }
    }
    REP(i, 1, n){
        REP(j, 1, m) pre[i][j] += pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
    }
    int mn_loss = INT_MAX;
    REP(i, 1, n){
        REP(j, 1, m){
            if (v[i][j] != '.') continue;
            int x1 = max(1, i - k + 1);
            int y1 = max(1, j - k + 1);
            int x2 = min(n, i + k - 1);
            int y2 = min(m, j + k - 1);
            int diff = pre[x2][y2] - pre[x1 - 1][y2] - pre[x2][y1 - 1] + pre[x1 - 1][y1 - 1];
            mn_loss = min(mn_loss, diff);
        }
    }
    int ans = pre[n][m] - mn_loss;
    cout << ans << '\n';
}
int main(void) {
    fast();
    ll t = 1;
    int i = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++) 
        solve(i);
}