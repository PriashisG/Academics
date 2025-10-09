#include <bits/stdc++.h>
using namespace std;

    // Typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<bool> vb;
    // Macros
#define PB push_back
#define endl '\n'
#define FOR(i, a, b) for (int i = a; i < b; i++)
void fast() {
    ios::sync_with_stdio(false);
    cin.tie(0);
}
const int N = 1e7;
vi v;                 
vb vis(N, 1);
void sieve(){
    vis[0] = 0;
    vis[1] = 0;
    for (int i = 2; i * i < N; i++){
        if (vis[i]){
            for (int j = i * i; j < N; j += i) vis[j] = 0;
        }
    }
    for (int i = 2; i < N; i++){
	    if (vis[i]) v.PB(i);
    }
}
void solve(ll tc) {
    int n; 
    cin >> n;
    sieve();
    cout << v[n - 1] << '\n'; 
}
int main(void) {
    fast();
    ll t = 1;
    int i = 1;
	solve(i);
}
