#include <bits/stdc++.h>
using namespace std;
    // Typedef
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
    // Macros
#define PB push_back
#define all(x) x.begin(), x.end()
#define trav(i, a) for (auto &i : a)
#define F first
#define S second
#define endl '\n'
#define sz(x) (ll)x.size()
void fast() {
    ios::sync_with_stdio(false);
    cin.tie(0);
}
void solve(ll tc){
    ll q;
    cin >> q;
    deque<pair<ll, pair<ll, ll>>> v;
    ll ind = 1;
    while (q--){
        ll type;
        cin >> type;
        if (type == 1){
            ll c, x;
            cin >> c >> x;
            v.PB({x, {ind, ind + c - 1}});
            ind += c;
        }
        else{
            ll k; cin >> k;
            ll sum = 0;
            while (k){
                auto u = v.front();
                v.pop_front();
                ll cnt = u.S.S - u.S.F + 1;
                if (cnt <= k){sum += u.F * cnt * 1ll; k -= cnt;}
                else{
                    sum += u.F * k;
                    u.S.F += k;
                    v.push_front(u);
                    k = 0;
                }
            }
            cout << sum << '\n';
        }
    }
}
int main(void) {
    fast();
    ll t = 1;
    int i = 1;
    solve(i);
}