#include<iostream>
using namespace std;
int main(){
 int *a=new int[5];

  int *b=new int[5];

  for(int i=0;i<5;i++){

    cin>>a[i];
    b[i]=a[i];

  }
  for(int i=0;i<5;i++){

    cout<<b[i];
   


  }

  delete[] a;
  a=new int[7];
  for(int i=0;i<5;i++){

  
    a[i]=b[i];

  }
  delete[]b;

  a[5]=50;
  a[6]=90;
for(int i=0;i<7;i++){

   cout<<a[i]<<" ";

  }



}