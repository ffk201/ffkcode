#include<iostream>
#include<string>
using namespace std;
int main(){
 int n;
 cin>>n;
 for(int i=0;i<n;i++){

   string s;
   cin>>s;
   int sum1=0;
   int sum2=0;
   for(int j=0;j<3;j++){
    sum1=sum1+s[j]-'0';

   }


for(int j=3;j<6;j++){
    sum2=sum2+s[j]-'0';

   }


   if (sum1 == sum2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

 }








