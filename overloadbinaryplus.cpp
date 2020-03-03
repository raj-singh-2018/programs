#include<iostream>
using namespace std;

class Number{
  int var;
public:
  Number(){
    var = 0;
  }
  Number(int t){
    var = t;
  }
  Number operator +(Number o){
    Number t;
    t.var = var + o.var;
    cout<<"A: "<<var<<endl;
    cout<<"B: "<<o.var<<endl;
    return t;
  }
  void display(){
    cout<<var<<endl;
  }
};

int main(){
  Number a(10), b(40);
  Number c = a + b;
  c.display();
}