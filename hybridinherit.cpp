#include<iostream>
using namespace std;

class base1{
public:
  void fun1(){
    cout<<"Base 1 class"<<endl;
  }
};

class base2{
public:
  void fun2(){
    cout<<"Base 2 class"<<endl;
  }
};

class ibase: public base1, public base2{
public:
  void fun3(){
    cout<<"Intermediate Base Class"<<endl;
  }
};

class derived1: public ibase{
public:
  void fun4(){
    cout<<"Derived 1 class"<<endl;
  }
};

class derived2: public ibase{
public:
  void fun5(){
    cout<<"Derived 2 class"<<endl;
  }
};

int main(){
  derived1 obj;
  derived2 obj1;
  obj.fun1();
  obj.fun2();
  obj.fun3();
  obj.fun4();
  obj1.fun1();
  obj1.fun2();
  obj1.fun3();
  obj1.fun5();  
}