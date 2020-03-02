#include<iostream>
using namespace std;

class Sample{
  int val;
public:
  Sample(){
    val = 0;
  }
  void operator ++(){
    ++val;
  }
  void operator ++(int i){
    val++;
  }
  void display(){
    cout<<val<<endl;
  }
};

int main(){
  Sample o;
  o++;
  ++o;
  o.display();
}