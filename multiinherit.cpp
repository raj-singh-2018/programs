#include<iostream>
using namespace std;

class base{
public:
  void fun1(){
    cout<<"Base"<<endl;
  }
};

class ibase : public base{
public:
  void fun2(){
    cout<<"Intermediate Base class"<<endl;
  }
};

class derived : public ibase{
public:
  void fun3(){
    cout<<"Derived class"<<endl;
  }
};

int main(){
  derived obj;
  obj.fun1();
  obj.fun2();
  obj.fun3();
}