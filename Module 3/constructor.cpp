#include<iostream>
using namespace std;


class Student{
 public:
 int roll;
 int cls;
 int cg;


 Student(int roll,int cls,int cg){
    this->roll=roll;
    this->cls=cls;
    this->cg=cg;

 }



};
int main(){

 Student a(3, 9, 7);
 cout<<a.roll<<a.cls<<a.cg;



}