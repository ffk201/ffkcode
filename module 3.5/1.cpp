#include<iostream>
using namespace std;


int main(){
int A,B;
char S;

cin>>A>>S>>B;


if(S=='>'&&A>B){
    cout<<"Right";

}
else if(S=='<'&&A>B){
    cout<<"Wrong";
}
else if(S=='='&&A==B){
    cout<<"Right";
}





}