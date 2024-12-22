#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){

   

    string s;
    getline(cin,s);
    stringstream tt(s);
    string dekh;
    int cnt=0;
    while(tt>>dekh){
        cout<<dekh<<endl;
        cnt++;
    }
    cout<<cnt;

}