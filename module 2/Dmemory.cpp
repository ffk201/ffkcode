#include<iostream>
using namespace std;
int *fun(){

    int *p=new int;
    *p=100;
    return p;
}


int main(){

  
 int *r=fun();
 cout<<r;



}