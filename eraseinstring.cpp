#include<iostream>
using namespace std;

int main(){
  string s = "C++ Programming";
  s.erase(1, 2);
  cout<<s<<endl;
  s.erase(1);
  cout<<s<<endl;
  s.erase();
  cout<<s<<endl;
}