#include<iostream>
using namespace std;
int *fun(){
   int *arr= new int[5];
     for(int i=0;i<5;i++){
        cin>>arr[i];
     }
     return arr;
}


int main(){




int *r=fun();

for(int i=0;i<5;i++){
    cout<<r[i];
}
return 0;

}