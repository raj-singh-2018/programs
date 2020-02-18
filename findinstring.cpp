#include<iostream>
using namespace std;

int main(){
  string s = "C++ Programming in C++";
  cout<<s.find("C++")<<endl;
  cout<<s.find("C++", 1)<<endl;
  cout<<s.find("Programming")<<endl;
  cout<<s.find("MATLAB")<<endl;
  cout<<s.rfind("C++")<<endl;
}