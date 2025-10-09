#include <bits/stdc++.h>
// #include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
    int A[100];
    for (int i = 0; i < 100; i++) A[i] = rand() % 100;

    auto start = high_resolution_clock::now();

    bool swapped;
    do {
        swapped = false;
        for (int i = 1; i < 100; i++) {
            if (A[i - 1] > A[i]) {
                swap(A[i], A[i - 1]);
                swapped = true;
            }
        }
    } while (swapped);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Sorted array: ";
    for (int i = 0; i < 100; i++) cout << A[i] << " ";
    cout << "\n";

    cout << "Time taken: " << duration.count() << " microseconds" << endl;

    return 0;
}
