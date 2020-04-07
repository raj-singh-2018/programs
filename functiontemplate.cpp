#include<iostream>
using namespace std;

template<class T>
void SWAP(T &a, T &b){
  T t = a;
  a = b;
  b = t;
}

int main(){
  int a = 10, b = 20;
  cout<<"BEFORE SWAPPING: "<<a<<" "<<b<<endl;
  SWAP(a, b);
  cout<<"AFTER SWAPPING: "<<a<<" "<<b<<endl;
  double c = 20.20, d = 10.10;
  cout<<"BEFORE SWAPPING: "<<c<<" "<<d<<endl;
  SWAP(c, d);
  cout<<"AFTER SWAPPING: "<<c<<" "<<d<<endl;
}