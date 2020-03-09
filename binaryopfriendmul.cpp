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
  friend Number operator *(Number o1, Number o2);
  void display(){
    cout<<var<<endl;
  }
};

Number operator *(Number o1, Number o2){
  Number o3;
  o3.var = o1.var * o2.var;
  return o3;
}

int main(){
  Number obj1(10), obj2(1000), obj3;
  obj3 = obj1 * obj2;
  obj3.display();
}

