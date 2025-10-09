#include <bits/stdc++.h>
using namespace std;

class Payment {
    double amount;

public:
    Payment(double x) {
        amount = x;
    }
    virtual void processPayment() = 0;  // Pure virtual function
    double getAmount() {
        return amount;
    }
};

class CreditCardPayment : public Payment {
    string cardNumber;
    string cardHolderName;

public:
    CreditCardPayment(double amt, string a, string b) : Payment(amt) {
        cardNumber = a;
        cardHolderName = b;
    }
    void processPayment() override {
        cout << "Payment Amount:    " << getAmount() << '\n';
        cout << "Card Number:       " << cardNumber << '\n';
        cout << "Card Holder Name:  " << cardHolderName << '\n';
    }
};

class MobilePayment : public Payment {
    string mobileNumber;
    string provider;

public:
    MobilePayment(double amt, string a, string b) : Payment(amt) {
        mobileNumber = a;
        provider = b;
    }
    void processPayment() override {
        cout << "Payment Amount:    " << getAmount() << '\n';
        cout << "Mobile Number:     " << mobileNumber << '\n';
        cout << "Provider:          " << provider << '\n';
    }
};

int main() {
    Payment* p[10];

    MobilePayment mp1(500, "01322851163", "Bkash");
    MobilePayment mp2(200, "124312", "Bkash");
    MobilePayment mp3(1000, "2453747", "DBBL");
    CreditCardPayment cc1(750, "2303056", "PG");

    p[0] = &mp1;
    p[1] = &mp2;
    p[2] = &mp3;
    p[3] = &cc1;

    for (int i = 0; i < 4; i++) {
        p[i]->processPayment();
        cout << "----------------------\n";
    }

    return 0;
}
