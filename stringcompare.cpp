#include<iostream>
using namespace std;

int main(){
  string s = "ABC", t = "ABC";
  cout<<"s < t = "<<(s < t)<<endl;
  cout<<"s != t = "<<(s != t)<<endl;
  cout<<"s == t = "<<(s == t)<<endl;
  cout<<"s == ABC = "<<(s == "abc")<<endl;
}