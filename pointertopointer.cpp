#include<iostream>
using namespace std;

int main(){
  int var = 10;
  int *p = &var;
  int **p2p = &p;
  int ***p2p2p = &p2p;
  int ***************************************************p1;
  cout<<*p<<" "<<var<<" "<<**p2p<<endl;
  cout<<p<<" "<<&var<<" "<<*p2p<<endl;
  cout<<p2p<<" "<<&p<<endl;
}