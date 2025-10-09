#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int LA[100];
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++) cin >> LA[i];

    int K, x;
    cout << "Enter the element to insert: ";
    cin >> x;
    cout << "Enter the position: ";
    cin >> K;

    for (int i = n; i >= K; i--) {
        LA[i] = LA[i - 1];
    }

    LA[K - 1] = x; 
    n++;

    cout << "The new array: ";
    for (int i = 0; i < n; i++) {
        cout << LA[i] << ' ';
    }
    cout << '\n';

    return 0;
}
