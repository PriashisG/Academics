#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int LA[100];
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++) cin >> LA[i];

    int K;
    cout << "Enter the position to delete: ";
    cin >> K;

    if (K < 1 || K > n) {
        cout << "Invalid position.\n";
        return 1;
    }

    for (int i = K - 1; i < n - 1; i++) {
        LA[i] = LA[i + 1];
    }

    n--;
    cout << "The new array: ";
    for (int i = 0; i < n; i++) {
        cout << LA[i] << ' ';
    }
    cout << '\n';

    return 0;
}
