#include<iostream>
#include<algorithm>
using namespace std;


int main(){

int T;
cin>>T;

for(int i=0;i<T;i++){
   
 int N;
 cin>>N;
 int A[N];
 int mn=INT_MAX;
 for(int i=0;i<N;i++){
    cin>>A[i];
 }
 for(int i=0;i<N-1;i++){

    for(int j=i+1;j<N;j++){
        int val=A[i]+A[j]+j-i;
        mn=min(mn,val);


    }
 }
 cout<<mn;

}




}