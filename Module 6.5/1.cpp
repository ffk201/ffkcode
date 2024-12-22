#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){

 string s;
 int count=0;
 getline(cin,s);
 stringstream ss(s);
 string word;

  for(int i=0;i<s.size();i++){
    if (s[i] == '!' || s[i] == '.' || s[i] == '?' || s[i] == ',') {
    s[i] =' ';
}

  }
 while(ss>>word){
       count++;
  }
 
 cout<<count;

}






