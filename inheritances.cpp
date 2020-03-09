#include<iostream>
using namespace std;

class base{
public:
  void display1(){
    cout<<"BASE CLASS"<<endl;
  }
};

class derived: private base{
public:
  void display2(){
    display1();
    cout<<"DERIVED CLASS"<<endl;
  }
};

int main(){
  derived obj;
  obj.display2();
}