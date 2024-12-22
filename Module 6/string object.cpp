#include<iostream>
using namespace std;

class Student{
 public:
    string name;
    int mark;
    int age;
    Student( string name,int mark,int age){
     this->name=name;
     this->mark=mark;
     this->age=age;


    }
    void print(){

        cout<<name<<" "<<mark<<" "<<age;
    }




};
int main(){

 Student *s1=new Student("Fahim",100,23);
 Student *s2=new Student("jadin",23, 22);
 *s1=*s2;
  s1->print();
  s2->print();
  delete s1;
 
  s1->print(); 

}