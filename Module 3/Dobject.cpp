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
Student* fun(){

 Student *rahim=new Student(3,7,9);
 return rahim;


}
int main(){
 Student *b=fun();
 cout<<b->roll<<b->cls<<b->cg;



}