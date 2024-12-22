#include<iostream>
using namespace std;
int main(){

string s;
cin>>s;


int frq[26]={0};
 for(int i=0;i<s.size();i++){
    frq[s[i]-'a']++;
 }
for(char i='a';i<='z';i++){
 for(int j=0;j<frq[i-'a'];j++){
      cout<<i;
 }
   
}






}