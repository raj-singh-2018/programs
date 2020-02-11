#include<iostream>
#include<fstream>
using namespace std;

int main(){
  fstream fout("output.txt", ios::in);
  char c = fout.get();
  cout<<c<<endl;
  fout.close();
}