#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){

string S;
getline(cin,S);
stringstream ss(S);
string word;
int count=0;
while(ss>>word){
  if(word=="Jessica"){
    count++;
    break;
  }
 


}
if(count>=1){
    cout<<"YES";
}
else cout<<"NO";










}