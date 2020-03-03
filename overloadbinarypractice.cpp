#include<iostream>
using namespace std;

class Number{
  int var1;
  double var2;
public:
  Number(){
    var1 = 0;
    var2 = 0.0;
  }
  Number(int t1, double t2){
    var1 = t1;
    var2 = t2;
  }
  Number operator + (Number o){
    Number t;
    t.var1 = var1 + o.var1;
    t.var2 = var2 + o.var2;
    return t;
  }
  void display(){
    cout<<var1<<endl;
    cout<<var2<<endl;
  }
};

int main(){
  Number a(2, 2.4), b(4, 4.4), c;
  c = a + b;
  c.display();
}