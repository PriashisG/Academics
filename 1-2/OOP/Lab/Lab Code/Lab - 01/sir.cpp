#include<bits/stdc++.h>
using namespace std;

class Bank{
    int acn;
    float balance;
    public:
    void SetData(int n, float b){
        acn=n;
        balance=b;
    }
    float GetBalance(){
        return balance;
    }
    void SetBalance(float b){
        balance+=b;
    }
    void SetWithdrawal(float b){
        balance-=b;
    }
};

Bank bx[1000];
int total=0;

void Create(){
    float x;
    cout<<"Your New Account Number:"<<total+1<<endl;
    cout<<"Enter your new balance:"<<endl;
    cin>>x;
    bx[total].SetData(total+1,x);
    total++;
    cout<<"New Account is Created Successfully"<<endl;
}
void ShowBalance(){
    int x,y;
    cout<<"Enter your account no. : \n ";
    cin>>x;
    // cout<<"Enter amount deposit: \n";
    // cin>>y;
    y=bx[x-1].GetBalance();
    // cout<<"Deposit Successful \n";
    cout<<"Your Balance= "<<y<<endl;

}

void Deposit(){
    int x,y;
    cout<<"Enter your account no. : \n ";
    cin>>x;
    cout<<"Enter amount deposit: \n";
    cin>>y;
    bx[x-1].SetBalance(y);
    cout<<"Deposit Successful \n";
}

void Withdrawal(){
    int x,y;
    cout<<"Enter your account no. : \n";
    cin>>x;
    cout<<"Enter Your withdrawal amount. : \n";
    cin>>y;
    bx[x-1].SetWithdrawal(y);
    cout<<"Your withdrawal is successful \n";
}

void Transfer(){
    int x,y,z;
    cout<<"Enter your account no. : \n";
    cin>>x;
    cout<<"Enter transfer account no. : \n ";
    cin>>y;
    cout<<"Eneter transfer amount . : \n";
    cin>>z;
    bx[x-1].SetWithdrawal(z);
    bx[y-1].SetBalance(z);
    cout<<"Your transaction is successfull \n";

}

int main() {
    int option;
    for(;;){
        cout<<"<--Main Menu-->"<<endl;
        cout<<"1. New Account"<<endl;
        cout<<"2. Deposit"<<endl;
        cout<<"3. Withdrawal"<<endl;
        cout<<"4. Transfer MOney"<<endl;
        cout<<"5. Show Balance"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"   Enter your option := ";
        cin>>option;
        if(option==6)break;
        switch (option)
        {
        case 1:
            Create();break;
        case 2:
            Deposit();break;
        case 3:
            Withdrawal();break;
        case 4:
            Transfer();break;
        case 5:
            ShowBalance();break;
        default:
            cout<<" YOU ENTERED A WRONG NUMBER \n Please Enter correct one\n";
            break;
        }
    }
    return 0;
}