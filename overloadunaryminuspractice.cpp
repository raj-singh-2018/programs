#include<iostream>
using namespace std;

class Number{
  int var1;
  double var2;
public:
  Number(int t1, double t2){
    var1 = t1;
    var2 = t2;
  }
  void display(){
    cout<<var1<<" "<<var2<<endl;
  }
  friend void operator -(Number &obj);
};

void operator -(Number &obj){
  obj.var1 = -obj.var1;
  obj.var2 = -obj.var2;
}

int main(){
  Number num(10, 10.5);
  -num;
  num.display();
}