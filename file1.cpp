#include<iostream>
#include<fstream>
using namespace std;

int main(){
  int value;
  ofstream out("output.txt");
  cin>>value;
  out<<value<<endl;
  out.close();
}