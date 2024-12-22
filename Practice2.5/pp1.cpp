#include<iostream>
using namespace std;

int *fun(int size ){
  int *arr=new int[size];
  for(int i=0;i<size;i++){
    cin>>arr[i];

  }
  return arr;

}

int main(){
int n;
cin>>n;

int *r=fun(n);
for(int i=0;i<n;i++){
    cout<<r[i];
}
return 0;

}