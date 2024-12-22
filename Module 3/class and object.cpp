#include<iostream>
#include<string>
using namespace std;

class Student{
  public:
  int roll;
  char name[100];
  double cg;



};

int main(){

Student a,b;
cin>>a.cg>>a.roll;
getchar();
cin.getline(a.name,100);

cout<<a.cg<<" "<<a.roll<<" "<<a.name;


}