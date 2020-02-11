#include<iostream>
#include<fstream>
using namespace std;

int main(){
  fstream fout("output.txt", ios::out | ios::in);
  cout<<"GET POINTER: "<<fout.tellg()<<endl;
  cout<<"PUT POINTER: "<<fout.tellp()<<endl;
  char s[20];
  fout<<"FILE HANDLING:"<<endl;
  cout<<"GET POINTER: "<<fout.tellg()<<endl;
  cout<<"PUT POINTER: "<<fout.tellp()<<endl;
  fout>>s;
  cout<<"S CONTAINS: "<<s<<endl;
  fout.close();
}