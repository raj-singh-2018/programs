#include<iostream>
using namespace std;

class Sample{
  int val;
public:
  Sample(){
    val = 0;
  }
  Sample(int t){
    val = t;
  }
  Sample operator -(){
    Sample o2;
    o2.val = -val;
    return o2;
  }
  void display(){
    cout<<val<<endl;
  }
};

int main(){
  Sample o(10), o1;
  o1 = -o;
  o1.display();
}