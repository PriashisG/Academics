#include <bits/stdc++.h>
using namespace std;

    // Typedef
typedef long long ll;
    // Macros
#define IN insert
#define endl '\n'
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define SZ(x) (ll)x.size()
void fast() {
    ios::sync_with_stdio(false);
    cin.tie(0);
}
void solve(ll tc){
    int n;
    cin >> n;
    set<int> s;
    FOR(i, 0, n){
        int x;
        cin >> x;
        s.IN(x);
    }
    cout << SZ(s) << '\n';
}
int main(void) {
    fast();
    ll t = 1;
    int i = 1;
    solve(i);
}