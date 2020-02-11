#include<iostream>
#include<fstream>
using namespace std;

int main(){
  fstream fout("output.txt", ios::in);
  char s[20];
  fout.seekg(5, ios::beg);
  fout>>s;
  cout<<"STRING S CONTAINS: "<<s<<endl;
  fout.close();
}