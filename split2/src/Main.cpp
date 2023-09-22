#include<iostream>
#include<string>
#include"../include/Student.h"
using namespace std;

using namespace st;
int main(void){
   Student s1;
   s1.setName("akshay");
   s1.setRollN(28);
   s1.setMarks(65);
   s1.calculateGrade();
   s1.printRecord();

}
