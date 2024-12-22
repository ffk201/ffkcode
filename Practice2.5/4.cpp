#include<iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if(a>b&&a>c){
    cout<<"max: "<<a;
}

else if(b>a&&b>c){
     cout<<"max: "<<b;
}

else if(c>a&&c>b){
     cout<<"max: "<<c;
}

if(a<b&&a<c){
    cout<<"min: "<<a;
}

else if(b<a&&b<c){
     cout<<"min: "<<b;
}

else if(c<a&&c<b){
     cout<<"min: "<<c;
}

return 0;


}