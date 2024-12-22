#include<iostream>
#include<cstring>
using namespace std;

class Student {
public:
    int id;
    char name[100];
    char section;
    int TotalMarks;

    Student(int id, char* name, char section, int TotalMarks) {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->TotalMarks = TotalMarks;
    }

    void printdetail() {
        cout << id << " " << name << " " << section << " " << TotalMarks << endl;
    }
};

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int id1, id2, id3;
        char name1[100], name2[100], name3[100];
        char section1, section2, section3;
        int TotalMarks1, TotalMarks2, TotalMarks3;

        cin >> id1 >> name1 >> section1 >> TotalMarks1;
        cin >> id2 >> name2 >> section2 >> TotalMarks2;
        cin >> id3 >> name3 >> section3 >> TotalMarks3;

        Student s1(id1, name1, section1, TotalMarks1);
        Student s2(id2, name2, section2, TotalMarks2);
        Student s3(id3, name3, section3, TotalMarks3);
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
