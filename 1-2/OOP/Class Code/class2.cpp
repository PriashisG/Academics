#include <bits/stdc++.h>
using namespace std;

class Bank
{
    int AccNo;
    float Balance;

public:
    // Constructor
    Bank(int n, float b)
    {
        AccNo = n;
        Balance = b;
    }

    void SetData(int n, float b)
    {
        AccNo = n;
        Balance = b;
    }

    void ShowData()
    {
        cout << "Account No. : " << AccNo << " ||| Balance : " << Balance << '\n';
    }

    float GetBalance()
    {
        return Balance;
    }

    int GetAccNo(){
        return AccNo;
    }
};

int main(void)
{
    Bank ac1(100, 4000), ac2(200, 9000), ac3(300, 7000);

    ac1.ShowData();
    ac2.ShowData();
    ac2.ShowData();

    float n = ac1.GetBalance();
    int m = ac1.GetAccNo();
    if (n < ac2.GetBalance()){
        n = ac2.GetBalance();
        m = ac2.GetAccNo();
    }

    if (n < ac3.GetBalance()){
        n = ac3.GetBalance();
        m = ac3.GetAccNo();
    }

    cout << "\nMax Balance : " << n << " ||| Account No : " << m << '\n';
}