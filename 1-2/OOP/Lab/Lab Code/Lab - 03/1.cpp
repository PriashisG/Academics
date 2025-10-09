#include <bits/stdc++.h>
using namespace std;

class Bank{
    int acn;
    int balance;
    static int total;
    static int sum;
    static int mx;
public :
    Bank(){ // Default Constructor
        acn = 0;
        balance = 0;
        total++;
    }
    Bank(int x, int y){ // Parameter Constructor
        acn = x;
        balance = y;
        total++;
    }
    Bank(const Bank *ptr){ // Copy Constructor
        acn = ptr->acn;
        balance = ptr->balance;
        total++;
    }
    void SetData(int x, int y){ // Data Set Function
        acn = x;
        balance = y;
    }
    void GetSum(){ // Sum Function
        sum += balance;
    }
    void GetMax(){ // Max finding function
        mx = max(mx, balance);
    }
    void Show()const{ // Display all value without changing any value
        cout << "acc = " << acn << '\n';
        cout << "balance = " << balance << '\n';
        cout << "No = " << total << '\n';
    }
    void ShowTotal(){ // Display total balance
        cout << "Total Balance : " << sum << '\n';
    }
    void ShowMax(){ // Display max balance
        cout << "Max Balance : " << mx << '\n';
    }
    void ShowMemberCnt(){ // Display member cnt
        cout << "Member Count = " << total << '\n';
    }
    ~Bank(){ // Destructor
        cout << "One account is closing\n";
    }
};

// Static member
int Bank::total = 0;
int Bank::sum = 0;
int Bank::mx = 0;

int main(void){
    int n;
    cout << "Enter Number of Account : ";
    cin >> n;
    Bank b[n];
    for (int i = 0; i < n; i++){
        int x, y;
        cout << "Acc No : ";
        cin >> x;
        cout << "Enter Balance : ";
        cin >> y;
        b[i].SetData(x, y);
    }
    for (int i = 0; i < n; i++){
        b[i].GetSum();
        b[i].GetMax();
    }
    cout << '\n';
    b->ShowTotal();
    b->ShowMax();
    b->ShowMemberCnt();
}