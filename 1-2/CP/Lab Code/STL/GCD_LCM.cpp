#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int GCD(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
ll LCM(ll a, ll b){
   return (a * b) / GCD(a, b);
}
int main(){
    int x, y;
    cin >> x >> y;
    int gcd = GCD(x, y);
    int lcm = LCM(x, y);
    cout << "GCD = " << gcd << '\n' << "LCM = " << lcm << '\n';
}