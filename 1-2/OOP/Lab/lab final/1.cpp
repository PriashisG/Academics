#include <bits/stdc++.h>
using namespace std;

class Payment{
	double amount;

public :
	Payment(double x){
		amount = x;
	}
	virtual void processPayment() = 0;
	double getAmount(){
		return amount;
	}
};

class CreditCardPayment : public Payment{
	string cardNumber;
	string cardHolderName;

public :
	CreditCardPayment(string a, string b, double amount) : Payment(amount){
		cardNumber = a;
		cardHolderName = b;
	}
	void processPayment(){
		cout << "Card Number: " << cardNumber << '\n';
		cout << "Card Holder Name: " << cardHolderName << '\n';
		cout << "Amount: " << getAmount() << '\n';
		cout << "\n\n";
	}
};

class MobilePayment : public Payment{
	string mobileNumber;
	string provider;

public :
	MobilePayment(string a, string b, double amount) : Payment(amount){
		mobileNumber = a;
		provider = b;
	}
	void processPayment(){
 		cout << "Mobile Number: " << mobileNumber << '\n';
		cout << "Provider: " << provider << '\n';
		cout << "Amount: " << getAmount() << '\n';
		cout << "\n\n";
	}
};


int main(void){
	Payment *p[10];
	MobilePayment mp1("01322851163", "Bkash", 1000), mp2("124312", "Bkash", 20000), mp3("2453747", "DBBL", 30000);
	CreditCardPayment cp1("2303056", "PG", 4000),cp2("2303056", "PG", 4000), cp3("2303056", "PG", 4000);


	p[0] = &mp1;
	p[1] = &mp2;
	p[2] = &mp3;
	p[3] = &cp1;
	p[4] = &cp2;
	p[5] = &cp3;

	p[0]->processPayment();
	p[1]->processPayment();
	p[2]->processPayment();
	p[3]->processPayment();
	p[4]->processPayment();
	p[5]->processPayment();

}