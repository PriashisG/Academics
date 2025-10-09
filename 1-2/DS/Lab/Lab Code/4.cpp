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
    cout << "Enter the Value to update: ";
    cin >> K;
    cout << "Enter the position to update: ";
    cin >> x;
    
    LA[x - 1] = K;

    cout << "The new array: ";
    for (int i = 0; i < n; i++) {
        cout << LA[i] << ' ';
    }
    cout << '\n';

    return 0;
}
