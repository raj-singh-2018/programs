#include<iostream>
#include<fstream>
using namespace std;

//Program to read and display the file's contents

int main(){
  char c, fname[20];
  int cnt = 0;
  cout<<"Enter Filename"<<endl;
  gets(fname);
  ifstream in(fname);
  while(!in.eof()){
    c = in.get();
    if(c == '#')
      cnt++;
  }
  cout<<cnt<<endl;
  in.close();
}