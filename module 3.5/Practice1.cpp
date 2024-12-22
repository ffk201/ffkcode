#include<iostream>
using namespace std;

class Student{

 public:
 char name[100];
 int roll;
 char section;
 int math_marks;
 int cls;

 Student(char *name,int roll,char section,int math_marks,int cls){

   strcpy(this->name,name);
   this->roll=roll;
   this->section=section;
   this->math_marks=math_marks;
   this->cls=cls;


 }
 void print(){

    cout<<name;
 }



};
int main(){

 char name1[100],name2[100],name3[100];
int roll1,roll2,roll3;
char section1,section2,section3;
int math_marks1,math_marks2,math_marks3;
int cls1,cls2,cls3;
cin>>name1>>roll1>>section1>>math_marks1>>cls1;
cin>>name2>>roll2>>section2>>math_marks2>>cls2;
cin>>name3>>roll3>>section3>>math_marks3>>cls3;
 Student s1(name1,roll1,section1,math_marks1,cls1);
 Student s2(name2,roll2,section2,math_marks2,cls2);
 Student s3(name3,roll3,section3,math_marks3,cls3);
 if(s1.math_marks>s2.math_marks&&s1.math_marks>s3.math_marks){
    s1.print();
 }
 else if(s2.math_marks>s1.math_marks&&s2.math_marks>s3.math_marks){
    s2.print();
 }
 else if (s3.math_marks>s1.math_marks&&s3.math_marks>s2.math_marks){
    s3.print();
 }
 






}
