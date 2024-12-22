#include<iostream>
#include<utility>

#include<sstream>
using namespace std;
int main(){

 string s;
 getline(cin,s);
 string word;
 stringstream ss(s);
 while(ss>>word){
    int i=0;
   int j=word.size()-1;
  while(i<j){
    swap(word[i],word[j]);
    i++;
    j--;
  
  }

 cout<<word<<" ";

 }


 }







