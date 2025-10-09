#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;


int main() {
    const int n = 100;
    int A[n];
    for (int i = 0; i < n; i++) A[i] = rand() % 200;

    int x = A[rand() % n]; 
    int LOC = -1;
    int K = 0;

    auto start = high_resolution_clock::now();

    while (LOC == -1 && K < n) {
        if (A[K] == x)
            LOC = K;
        K++;
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    if (LOC == -1)
        cout << x << " not found in array.\n";
    else
        cout << x << " found at position " << LOC << "\n";

    cout << "Time taken: " << duration.count() << " microseconds\n";

    return 0;
}