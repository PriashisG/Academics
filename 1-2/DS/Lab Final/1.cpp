#include<bits/stdc++.h>
using namespace std;

int main(void){

    auto start = chrono::high_resolution_clock::now();

    int arr[10] = {3, 5, 6, 10, 19, 24, 27, 31, 36, 45};
    int tar = 10;
    int l = 0, r = 9;
    int ans = -1;
    while (l <= r){
            int mid = (l + r) / 2;
        if (arr[mid] > tar) r = mid - 1;
        else if (arr[mid] < tar) l = mid + 1;
        else{
            ans = mid;
            break;
        }
    }

    if (ans != -1) cout << ans << '\n';
    else cout << "Not Found.\n";


    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;
    cout << "\nExecution time: " << duration.count() << " seconds\n";
}