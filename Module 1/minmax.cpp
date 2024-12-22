#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
int main(){

 int a,b;
 cin>>a>>b;
 int minimum=min(a,b);
 int maximum=max(a,b);
 cout<<"minimum : "<<minimum<<" "<<"maximum:  "<<maximum<<endl;
 swap(a,b);
 cout<<a<<endl<<b;
 return 0;

}