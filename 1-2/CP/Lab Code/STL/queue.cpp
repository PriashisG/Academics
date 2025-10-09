#include <bits/stdc++.h>
using namespace std;

    // Typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;

#define PB push_back
#define all(x) x.begin(), x.end()
#define trav(i, a) for (auto &i : a)
#define endl '\n'
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define REP(i, a, b) for (int i = a; i <= b; i++)
template <typename T>
void pv(vector<T> &a){
    trav(u, a) cout << u << ' ';
    cout << '\n';
}
void fast() {
    ios::sync_with_stdio(false);
    cin.tie(0);
}
const int N = 1e5 + 10;
vvi adj(N);
vi dis(N, -1);
vi parent(N, -1);
void BFS(){
    queue<int> pos;
    pos.push(1);
    dis[1] = 0;
    while(!pos.empty()){
        int node = pos.front();
        pos.pop();
        trav(u, adj[node]){
            if (dis[u] != -1) continue;
            dis[u] = dis[node] + 1;
            parent[u] = node;
            pos.push(u);
        }
    }
}
void solve(ll tc){
    int n, m;
    cin >> n >> m;
    FOR(i, 0, m){
        int u, v;
        cin >> u >> v;
        adj[u].PB(v);
        adj[v].PB(u);
    }
    BFS();
    if (dis[n] == -1){cout << "IMPOSSIBLE\n";return;}
    cout << dis[n] + 1 << '\n';
    int ind = n;
    vi ans;
    ans.PB(ind);
    while(parent[ind] != -1){
        ans.PB(parent[ind]);
        ind = parent[ind];
    }
    reverse(all(ans));
    pv(ans);
}
int main(void) {
    fast();
    ll t = 1;
    int i = 1;
    solve(i);
}