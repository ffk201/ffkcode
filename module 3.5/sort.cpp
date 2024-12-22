#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
 
int  A[5];
 for(int i=0;i<5;i++){
    cin>>A[i];
 }
sort(A,A+5);
for(int i=0;i<5;i++){
    cout<<A[i];
 }


}