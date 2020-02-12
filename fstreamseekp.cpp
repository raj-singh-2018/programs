#include<iostream>
#include<fstream>
using namespace std;

int main(){
  fstream fout("output.txt", ios::in | ios::out);
  cout<<"PUT POINTER: "<<fout.tellp()<<endl;
  // fout<<"Z"<<endl;
  fout.seekp(5, ios::beg);
  fout<<"TEST";
  fout.close();
}