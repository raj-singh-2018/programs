#include<iostream>
#include<fstream>
using namespace std;

class character{
  char var;
public:
  character(char t){
    var = t;
  }
  friend int operator *(char c1, character c2);
};

int operator *(char c1, character c2){
  return c1 * c2.var;
}

int main(){
  character c1('a'), c2('b');
  cout<<'c' * c2<<endl;
}