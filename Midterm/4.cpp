#include<iostream>
#include<cstring>
using namespace std;
class Student{
    public:
 int id;
 char name[100];
 char section;
  int marks;

 Student(int i,char *n,char s,int m){
     id=i;
   
     strcpy(name,n);
     section=s;
     marks=m;

 }
 void printdetail(){

    cout<<id<<" "<<name<<" "<<section<<" "<<marks;
}


};

int main(){

int T;
cin>>T;
for(int i=0;i<T;i++){


int id1;
    
    cin >> id1;
    cin.ignore(); 

    char name1[100];
   
    cin.getline(name1, 100);

    char section1;
    
    cin >> section1;
    cin.ignore(); 

    int marks1;
    
    cin >> marks1;
Student s1(id1,name1,section1,marks1);
int id2;
    
    cin >> id2;
    cin.ignore(); 

    char name2[100];
   
    cin.getline(name2, 100);

    char section2;
    
    cin >> section2;
    cin.ignore(); 

    int marks2;
    
    cin >> marks2;

Student s2(id2,name2,section2,marks2);
Student s3(id,name,section,marks);

if(s1.marks>s2.marks&&s1.marks>s3.marks){
   s1.printdetail();
}

else if(s2.marks>s1.marks&&s2.marks>s3.marks){
   s2.printdetail();
}
else if(s3.marks>s1.marks&&s3.marks>s2.marks){
   s3.printdetail();
}
else if(s1.marks==s2.marks){
    if(s1.id<s2.id){
        s1.printdetail();
    }
    else if(s2.id<s1.id){
        s2.printdetail();
    }
    
}
else if(s2.marks==s3.marks){
    if(s2.id<s3.id){
        s2.printdetail();
    }
    else if(s3.id<s2.id){
        s3.printdetail();
    }
}
else if(s1.marks==s3.marks){
    if(s1.id<s3.id){
        s1.printdetail();
    }
    else if(s3.id<s1.id){
        s3.printdetail();
    }




}
}
}