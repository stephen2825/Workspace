#include<iostream>
#include<string>
#include"../include/Student.h"
using namespace std;

using namespace st;
void Student::setName(string name) {
	this->name = name;
}
void Student::setRollN(int No) {
	this->rollNumber = No;
}
void Student::setMarks(float Marks) {
	this->marks = Marks;
}
char Student::calculateGrade() {
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
	if (Marks < 60) {
		this->grade = 'f';
	}

}
void Student::printRecord() {
	cout << "name : " << name << endl;
	cout << "rollNumber : " << rollNumber << endl;
	cout << "marks : " << marks << endl;
	cout << "grade : " << grade << endl;
}
