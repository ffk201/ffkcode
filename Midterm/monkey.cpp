#include<iostream>
#include<algorithm>
using namespace std;
int main(){

char S[100005];

while(cin.getline(S,100005)){

int r=strlen(S);

sort(S,S+r);
for(int i=0;i<r;i++){
  if(S[i]==' '){
    continue;
  }
  cout<<S[i];
}
 cout<<endl;
}







}