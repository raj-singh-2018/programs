#include<iostream>
using namespace std;

class Number{
  int var1;
  double var2;
public:
  Number(){
    var1 = 0;
    var2 = 0;
  }
  Number(int t1, double t2){
    var1 = t1;
    var2 = t2;
  }
  Number operator -(){
    Number o2;
    o2.var1 = -var1;
    o2.var2 = -var2;
    return o2;
  }
  void display(){
    cout<<var1<<" "<<var2<<endl;
  }
};

int main(){
  Number o(10, 9.5), o1;
  o1 = -o;
  o1.display();
}