#include<iostream>
using namespace std;

int main(){
  string s = "Programming";
  char *p = " is fun";
  s = s + "in C++" + p;
  cout<<s.length()<<endl;
  cout<<s.size()<<endl;
}