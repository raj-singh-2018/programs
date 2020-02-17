#include<iostream>
using namespace std;

int main(){
  string s = "C++";
  string t("Programming");
  s = t; //strcpy(s, t);
  cout<<s<<endl;
}