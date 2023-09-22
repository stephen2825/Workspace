#include<iostream>
using namespace std;
void sum(int num1,double num2){
	int result;
	result=num1+num2;
	cout<<"result : "<<result<<endl;
}
void sum(double num1,int num2){
	int result;
	result=num1+num2;
	cout<<"result : "<<result<<endl;
}
int main(void){
	sum(10,65.5);
	sum(70.5,50);
	return 0;
}
