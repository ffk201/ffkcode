#include<iostream>
using namespace std;


int main(){
int A,B,C;
char S;
char Q;

cin>>A>>S>>B>>Q>>C;
int result;

if(S=='+'){
   result=A+B; 
}
else if(S=='-'){
    result=A-B;
}
else if(S=='*'){
    result=A*B;
}

if(C==result){
    cout<<"Yes";
}
else cout<<result;
    


}