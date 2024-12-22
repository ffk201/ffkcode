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
Student fun(){

 Student a(3,7,9);
 return a;


}
int main(){
 Student b=fun();
 cout<<b.roll<<b.cls<<b.cg;



}