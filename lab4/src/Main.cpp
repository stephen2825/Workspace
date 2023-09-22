#include<iostream>
using namespace std;
void sum(int num1,int num2){
	int result;
	result=num1+num2;
	cout<<"result : "<<result<<endl;
}
void sum(int num1,double num2,){
	double result;
	result=num1+num2;
	cout<<"result : "<<result<<endl;
}
int main(void){
	sum(10,30.5);
	return 0;
}
