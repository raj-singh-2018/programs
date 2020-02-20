#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  double var = 1.1234567890123456;
  cout<<var<<endl;
  cout<<setprecision(10)<<var<<endl;
  cout<<setprecision(17)<<var<<endl;
  cout<<setprecision(2)<<var<<endl;
}