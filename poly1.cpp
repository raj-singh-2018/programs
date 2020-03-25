#include<iostream>
using namespace std;

class base{
public:
  void fun1(){
    cout<<"BASE CLASS"<<endl;
  }
};

class derived: public base{
public:
  void fun2(){
    cout<<"DERIVED CLASS"<<endl;
  }
};

int main(){
  base obj, *ptr = &obj;
  ptr->fun1();
}