#include<iostream>
using namespace std;

class Number{
  int var;
public:
  Number(int t){
    var = t;
  }
  void display(){
    cout<<var<<endl;
  }
  friend void operator -(Number &obj);
};

void operator -(Number &obj){
  obj.var = -obj.var;
  cout<<"IN FUNCTION: "<<obj.var<<endl;
}

int main(){
  Number num(10);
  -num;
  num.display();
}