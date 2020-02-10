#include<iostream>
#include<fstream>
using namespace std;

//Program for writing to a file one character at a Time

int main(){
  ofstream out("output.txt");
  char var = 'a';
  out.put(var);
  out.close();
}