#include<iostream>
using namespace std;
class InstanceCounter{
	static int count;
public:
	InstanceCounter(){
		InstanceCounter::count=InstanceCounter::count+1;
	}
	static int getCount(void){
		return InstanceCounter::count;
	}
	~InstanceCounter(){

	}
};
int InstanceCounter::count=0;
int main(){
	InstanceCounter c1,c2,c3;
	cout<<" InstanceCounter  :  "<<InstanceCounter::getCount()<<endl;
	return 0;
}
