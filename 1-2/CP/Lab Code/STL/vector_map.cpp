#include <bits/stdc++.h>
using namespace std;
    // Typedef
typedef long long ll;
typedef vector<int> vi;
typedef map<int, int> mii;
    // Macros
#define PB push_back
#define all(x) x.begin(), x.end()
#define trav(i, a) for (auto &i : a)
#define F first
#define S second
#define endl '\n'
#define DEBUG(i) cout << "DEBUG " << i << "\n";
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define GT() greater<>()
#define print(x) for(auto &i : x) cout << i << " " ; cout '\n'
    // Functions
template <typename T>
void pv(vector<T> &a){
    trav(u, a) cout << u << ' ';
    cout << '\n';
}
void fast() {
    ios::sync_with_stdio(false);
    cin.tie(0);
}
void solve(ll tc){
    int n;
    cin >> n;
    vi v(n);
    FOR(i, 0, n) cin >> v[i];
    sort(all(v));
    int mex = 0;
    FOR(i, 0, n) if (v[i] == mex) mex++;
    mii m;
    FOR(i, 0, n){if (v[i] > mex) break; m[v[i]]++;}
    mii mfreq;
    trav(u, m) mfreq[u.S]++;
    // trav(u, mfreq) cout << u.F << " = " << u.S << '\n';
    vi ans(n + 1, -1);
    ans[0] = 1;
    int cnt = 0, ind = 1;;
    while (cnt < mex){ans[n - cnt] = cnt + 1; cnt++;}
    while (ans[ind] == -1){
        ans[ind] = ans[ind - 1] + mfreq[ind];
        ind++;
    }
    pv(ans);
}
int main(void){
    fast();
    ll t = 1;
    int i = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++) 
        solve(i);
}