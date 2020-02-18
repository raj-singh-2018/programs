#include<iostream>
using namespace std;

int main(){
  string s = "C## P#rogra#mmi#ng";
  s.replace(1, 2, "++");
  while(s.find("#") < s.length())
    // s.erase(s.find("#"), 1);
    s.replace(s.find("#"), 1, "");
  cout<<s<<endl;
}