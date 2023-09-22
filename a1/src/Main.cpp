#include<iostream>
#include<string>
using namespace std;

class Student{
	string name;
	int rollNumber;
	float marks;
	char grade;
public:
	void setName(string name){
		this->name=name;
	}
	void setRollN(int  No){
			this->rollNumber=No;
		}
	void setMarks(float Marks){
			this->marks=Marks;
		}
	char calculateGrade() {
		float Marks = this->marks;

		if (Marks >= 90 && Marks < 100) {
			this->grade = 'A';
		}
		if (Marks >= 80 && Marks < 89) {
			this->grade = 'B';
		}
		if (Marks >= 70 && Marks < 79) {
			this->grade = 'C';
		}
		if (Marks >= 60 && Marks < 69) {
			this->grade = 'D';
		}
		if (Marks <60) {
			this->grade = 'f';
		}

	    }
	void printRecord(){
      cout<<"name : "<<name<<endl;
      cout<<"rollNumber : "<<rollNumber<<endl;
      cout<<"marks : "<<marks<<endl;
      cout<<"grade : "<<grade<<endl;
	}

};
int main(void){
   Student s1;
   s1.setName("akshay");
   s1.setRollN(28);
   s1.setMarks(65);
   s1.calculateGrade();
   s1.printRecord();

}
