#include<iostream>
#include<string>
using namespace std;
int main(){

 /*string s="Fahim";
 string f="Fahim";
 cout<<s<<f<<endl;
 if(s==f){
    cout<<"same"<<endl;

 }
 else{
    cout<<"Not same";
 




}*/

/*string d;
cin>>d;
cout<<d<<endl;
 cout<<d.size()<<endl;
 d.clear();
 cout<<d<<endl;
 if(d.empty()==true){

    cout<<"EMpty"<<endl;

 }
 else cout<<"Not empty";
 string t="Fahim";
 t.resize(11,'X');
 cout<<t.size()<<endl;
 cout<<t;*/
 /*string g="FahimKhan";
 cout<<g[0]<<endl;
 cout<<g[g.size()-1]<<endl;
 cout<<g.back()<<endl;
 cout<<g.front();*/

/*string a="HELLo";
string b="Hey";
a=a+b;
string c="hi";
cout<<a<<endl;
a=a+c;

cout<<a<<endl;
a.push_back('A');
cout<<a<<endl;
a.pop_back();
cout<<a;*/


/*string s="Hellobd";
s.replace(5,0,"hi");
cout<<s<<endl;
s.replace(5,1,"hello");
cout<<s<<endl;
s.erase(5);
cout<<s;*/

string s="Helloworld";
cout<<*s.begin()<<endl;
cout<<*(s.end()-1)<<endl;
for(string::iterator it=s.begin();it<s.end();it++){
    cout<<*it<<endl;
}
return 0;
}