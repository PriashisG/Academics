#include <bits/stdc++.h>
using namespace std;

class Bank{
    int AccNo;
    float Balance;

    public :

    void SetData(int n, float b){
        AccNo = n;
        Balance = b;
    }

    float GetBalance(){
        return Balance;
    }

    void SetBalance(float b){
        Balance += b;
    }

    void SetWithdrawal(float b){
        Balance -= b;
    }

};

Bank b[1000];
int Total = 0;

void Create(){
    int x,y;
    cout << "Enter your account no. : \n ";
    cin >> x;;
    y = b[x-1].GetBalance();
    cout << "Your Balance = " << y << '\n';
}

void Deposit(){
    int x, y;
    cout << "Enter your account no. : \n ";
    cin >> x;
    cout << "Enter amount deposit: \n";
    cin >> y;
    b[x-1].SetBalance(y);
    cout << "Deposit Successful \n";
}

void Withdrawal(){
    int x,y;
    cout <<"Enter your account no. : \n";
    cin >> x;
    cout << "Enter Your withdrawal amount. : \n";
    cin >> y;
    b[x-1].SetWithdrawal(y);
    cout << "Your withdrawal is successful \n";
}

void Transfer(){
    cout << "It's coming :) ..\n";
}

void ShowBalance(){
    cout << "It's coming :) ..\n";
}

int main(void){
    int option;
    while (1){
        cout << "\n\t<----- MAIN MENU ----->\n\n";
        cout << "1. New Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdrawal\n";
        cout << "4. Transfer Money\n";
        cout << "5. Show Balance\n";
        cout << "6. Exit\n\n";
        cout << "------------------\n\n";
        cout << "Enter Your Option - ";

        cin >> option;
        cout << '\n';

        if (option == 1) Create();
        else if (option == 2) Deposit();
        else if (option == 3) Withdrawal();
        else if (option == 4) Transfer();
        else if (option == 5) ShowBalance();
        else if (option == 6) break;
        else cout << "You entered a wrong number.... Please Enter correct one.\n";
    }
}