#include<iostream>
#include<cstring>
using namespace std;

class Cricketer{
public:
int jersey_no;
char country[100];





};
int main(){
 Cricketer *dhoni=new Cricketer;
 dhoni->jersey_no=7;
 char temp[100]="India";
  strcpy(dhoni->country,temp);
  Cricketer *kohli=new Cricketer;
  kohli=dhoni;
  delete dhoni;
  cout<<kohli->country<<kohli->jersey_no;



}