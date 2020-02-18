#include<iostream>
using namespace std;

int main(){
  string s = "ABC";
  string t = "DEF";
  cout<<"BEFORE SWAPPING: "<<endl;
  cout<<"S: "<<s<<endl;
  cout<<"T: "<<t<<endl;
  string temp = s;
  s = t;
  t = temp;
  cout<<"AFTER SWAPPING: "<<endl;
  cout<<"S: "<<s<<endl;
  cout<<"T: "<<t<<endl;
  s.swap(t);
  cout<<"AFTER SWAPPING: "<<endl;
  cout<<"S: "<<s<<endl;
  cout<<"T: "<<t<<endl;
}