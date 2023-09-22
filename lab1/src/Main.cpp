#include<iostream>
#include<string>
using namespace std;
class ArithmeticOperation{
private:
	const string message;
	const int lineNumber;
	const string functionName;
	const string fileName;
public:

	ArithmeticOperation( string message,int lineNumber,string functionName,string file)
	: message(message),lineNumber(lineNumber), functionName (functionName), fileName( file){}

	string getmessage(void ){
		return this->message;
	}
	int getlinenumber(void){
		return this->lineNumber;
	}
	string getfunctionname(void){
		return this->functionName;
	}
	string getfilename(void){
		return this->fileName;
	}
};
void acceptrecord(int &number){
	cout<<"number is "<<endl;
	cin>>number;
}
	int calculate(int num1, int num2){
		if( num2==0 )
			throw ArithmeticOperation("Divide by zero error",__LINE__,__FUNCTION__,__FILE__);
		return num1/num2;
	}
	void print(int &result){
		cout<<"result is : "<<result<<endl;
	}

int main(){
	try {
		int num1;
		acceptrecord(num1);
		int num2;
		acceptrecord(num2);
		int result=calculate(num1,num2);
		print(result);

	}catch(ArithmeticOperation &ex){

		cout<<ex.getmessage()<<endl;
		cout<<ex.getlinenumber()<<endl;
		cout<<ex.getfunctionname()<<endl;
		cout<<ex.getfilename();

	}
	return 0;

}
