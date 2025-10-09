#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main() {
    int n = 100;
    int A[n];
    
    for (int i = 0; i < n; i++) A[i] = i * 2; 
    
    int x = A[rand() % n]; 
    int LB = 0, UB = n - 1, LOC = -1;
    int MID;

    auto start = high_resolution_clock::now();

    while (LB <= UB && LOC == -1) {
        MID = (LB + UB) / 2;
        if (x < A[MID])
            UB = MID - 1;
        else if (x > A[MID])
            LB = MID + 1;
        else
            LOC = MID;
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    if (LOC == -1) cout << x << " not found.\n";
    else cout << x << " found at index " << LOC << ".\n";

    cout << "Time taken: " << duration.count() << " microseconds\n";

    return 0;
}
