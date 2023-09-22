#include<iostream>
#include<string>
using namespace std;
class BankingAccount{


private:

	int accountNumber;
	string accountHolderName;
	double balance;


public:
	BankingAccount (string name,int acc){
		this->accountHolderName=name;
		this->accountNumber=acc;
		this->balance=0;
		//void displayAccountDetails();
	}
     void deposit(){
	cout<<"money to deposit "<<endl;
	cin>>balance;
     }
	void withDraw()
	{
      cout<<"withdraw  : "<<endl;
      double with;
      cin>>with;
      this->balance=this->balance-with;

    }
	void displayAccountDetails(){
		cout<<"accountHolderName : "<<accountHolderName<<endl;
		cout<<"accountNumber  :  "<<accountNumber<<endl;
		cout<<"balance  :  "<<balance<<endl;
	}
};
int main(){
  BankingAccount a1("akshay",1001);
  a1.displayAccountDetails();
  a1.deposit();
  a1.displayAccountDetails();
  a1.withDraw();
  a1.displayAccountDetails();

	return 0;

}
