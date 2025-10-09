#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout << "Enter the array size : ";
    cin >> n;

    int LA[n];
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++) cin >> LA[i];

    int LB = 1, UP = n;
    int k = 1;
    cout << "Traversing the array : ";
    while (k <= UP){
        cout << LA[k - 1] << ' ';
        k += 1;
    }
    cout << '\n';

    return 0;
}