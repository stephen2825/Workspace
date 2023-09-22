#include<iostream>
#include<string>
#include"../include/BankingAccount.h"

using namespace std;

int main(){
  BankingAccount a1("akshay",1001);
  a1.displayAccountDetails();
  a1.deposit();
  a1.displayAccountDetails();
  a1.withDraw();
  a1.displayAccountDetails();

	return 0;

}


