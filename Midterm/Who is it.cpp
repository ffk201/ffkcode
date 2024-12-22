#include<iostream>
#include<cstring>
using namespace std;

class Student{

 public:
 int id;
 char name[100];
 char section;
 int TotalMarks;
  
  Student( int id,char* name,char section,int TotalMarks){
    this->id=id;
   strcpy(this->name,name);
   this->section=section;
   this->TotalMarks=TotalMarks;



  }
  void printdetail(){
    cout<<id<<" "<<name<<" "<<section<<" "<<TotalMarks<<" "<<endl;
  }
 


};
int main(){
int T;
cin>>T;
for(int i=0;i<T;i++){
 int id1;
 cin>>id1;
 getchar();
 char name1[100];
 cin.getline(name1,100);
 char section1;
 cin>>section1;
 getchar();
 int TotalMarks1;
 cin>>TotalMarks1;
 Student s1(id1,name1,section1,TotalMarks1);

 int id2;
 cin>>id2;
 getchar();
 char name2[100];
 cin.getline(name2,100);
 char section2;
 cin>>section2;
 getchar();
 int TotalMarks2;
 cin>>TotalMarks2;
 Student s2(id2,name2,section2,TotalMarks2);
 int id3;
 cin>>id3;
 getchar();
 char name3[100];
 cin.getline(name3,100);
 char section3;
 cin>>section3;
 getchar();
 int TotalMarks3;
 cin>>TotalMarks3;
 Student s3(id3,name3,section3,TotalMarks3);
if(s1.TotalMarks>s2.TotalMarks&&s1.TotalMarks>s3.TotalMarks){
   s1.printdetail();
}

else if(s2.TotalMarks>s1.TotalMarks&&s2.TotalMarks>s3.TotalMarks){
   s2.printdetail();
}
else if(s3.TotalMarks>s1.TotalMarks&&s3.TotalMarks>s2.TotalMarks){
   s3.printdetail();
}
else if(s1.TotalMarks==s2.TotalMarks){
    if(s1.id<s2.id){
        s1.printdetail();
    }
    else if(s2.id<s1.id){
        s2.printdetail();
    }
    
}
else if(s2.TotalMarks==s3.TotalMarks){
    if(s2.id<s3.id){
        s2.printdetail();
    }
    else if(s3.id<s2.id){
        s3.printdetail();
    }
}
else if(s1.TotalMarks==s3.TotalMarks){
    if(s1.id<s3.id){
        s1.printdetail();
    }
    else if(s3.id<s1.id){
        s3.printdetail();
    }




}
}

return 0;
}