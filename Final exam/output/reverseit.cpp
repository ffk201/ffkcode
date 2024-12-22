#include<iostream>
#include<algorithm>
using namespace std;

class Student {
public:
    string nm;
    int cls;
    string s;
    int id;
    
    
};


 

int main() {
    int N;
    cin >> N;

    Student a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i].nm >> a[i].cls >> a[i].s>>a[i].id;
    }
 
   int i=0;
   int j=N-1;
   while(i<j){

    swap(a[i].s,a[j].s);
    i++;
    j--;
   }

    for (int i = 0; i < N; i++) {
        cout<< a[i].nm<<" "<< a[i].cls<<" "<< a[i].s<<" "<<a[i].id<<endl;
    }

    return 0;
}
