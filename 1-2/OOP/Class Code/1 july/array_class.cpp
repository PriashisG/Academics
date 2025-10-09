#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    // int ax[5] = {1, 2, 3, 4, 5};
    array<int, 5> ax = {1, 2, 3, 4, 5};

    cout << ax[0] << '\n';    // output using index
    cout << ax.at(0) << '\n'; // output using mathod of array class

    // if there any chance of exception
    int i;
    cin >> i;
    try{
        cout << ax[i] << '\n';          //it doesn't handle exception
        cout << ax.at(i) << '\n';       //  this can handle it    
    }
    catch(exception e){
        cout << "Index out of bound.\n";
    }
}