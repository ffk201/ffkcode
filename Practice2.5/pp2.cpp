#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++){

    cin>>arr[i];
}

int m;
cin>>m;
int *b=new int[m];
for(int i=0;i<n;i++)
{
    b[i]=arr[i];
}

delete[]arr;
int t=m-n;
cout<<t;
for(int i=0;i<t;i++){
    cin>>b[n+i];

}
for(int i=0;i<m;i++){
    cout<<b[i];
    
}
return 0;
}