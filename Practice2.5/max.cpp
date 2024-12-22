#include<iostream>
#include<algorithm>

using namespace std;
int main(){

int arr[5];
for(int i=0;i<5;i++){

    cin>>arr[i];

}

int mx= INT_MIN;
for(int i=0;i<5;i++){
     mx=max(mx,arr[i]);
}
cout<<mx;




}