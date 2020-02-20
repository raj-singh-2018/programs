#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  int a = 12;
  cout<<setbase(8);
  cout<<"Octal: "<<a<<endl;
  cout<<setbase(16);
  cout<<"Hexadecimal: "<<a<<endl;
  cout<<setbase(10);
  cout<<"Decimal: "<<a<<endl;
}
