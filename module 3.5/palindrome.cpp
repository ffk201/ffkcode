#include<iostream>
using namespace std;
int main(){

int arr[5];
for(int i=0;i<5;i++){

    cin>>arr[i];

}
int flag=1;
 int i=0;int j=5-1;
   while(i<j){
   if(arr[i]!=arr[j]){
     flag=0;
     break;
   }
   i++;
   j--;

   }

if(flag==1){
    cout<<"Palindrome";
}
else cout<<"Not palindrome";




}