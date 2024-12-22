#include<iostream>
#include<algorithm>
using namespace std;
int *sort_it(int size){

   int *A=new int[size];
   for(int i=0;i<size;i++){

    cin>>A[i];

   }
   sort(A,A+size,greater<int>());
  return A;
}


int main(){

int N;
cin>>N;

int *R=sort_it(N);

for(int i=0;i<N;i++){
    cout<<R[i]<<" ";
}

return 0;

}