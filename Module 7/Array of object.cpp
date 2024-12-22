#include<iostream>
using namespace std;


class Student{

public:
  string name;
  int marks;
  int cls;





};

int main(){
int n;
cin>>n;


 Student a[n];
 for(int i=0;i<n;i++){

    cin>>a[i].name>>a[i].marks>>a[i].cls;
    cin.ignore();
 }
 Student mn;
 mn.marks=INT_MAX;
 for(int i=0;i<n;i++){
    if(a[i].marks<mn.marks){
        mn=a[i];
    }
 }
 cout<<mn.name<<" "<<mn.marks<<" "<<mn.cls;



}