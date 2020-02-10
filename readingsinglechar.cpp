#include<iostream>
#include<fstream>
using namespace std;

int main(){
  ifstream in("output.txt");
  for(int i = 0; i < 10; i++){
    char c = in.get();
    cout<<c;
  }
  in.close();
}