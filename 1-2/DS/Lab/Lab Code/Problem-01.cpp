#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Size of the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    auto start = chrono::high_resolution_clock::now();

    for (int i = 1; i < n; i++) { 
        for (int k = i; k >= 1; k--) {
            if (arr[k] < arr[k - 1]) {
                swap(arr[k], arr[k - 1]);
            } 
            else break; 
        }
    }

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;
    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
    cout << "\nExecution time: " << duration.count() << " seconds\n";

    return 0;
}
