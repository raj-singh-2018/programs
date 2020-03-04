#include<iostream>
using namespace std;

class boolean{
  bool var;
public:
  boolean(bool t){
    var = t;
  }
  friend bool operator !(boolean ob);
};

bool operator !(boolean ob){
  return !ob.var;
}

int main(){
  boolean obj(0);
  cout<<!obj<<endl;
}