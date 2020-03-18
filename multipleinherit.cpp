#include<iostream>
using namespace std;

//Program to demonstrate multiple inheritance

//Base class 1 containing public function fun1()
class base1{
public:
  void fun1(){
    cout<<"BASE1"<<endl;
  }
};

//Base class 2 containing public function fun2()
class base2{
public:
  void fun2(){
    cout<<"BASE2"<<endl;
  }
};

//Derived class containing public function fun3() inheriting publicly from two base
//classes base1 and base2
class derived: public base1, public base2{
public:
  void fun3(){
    cout<<"DERIVED"<<endl;
  }
};

//Creating an object obj of derived class which calls all functions fun1(), fun2()
//and fun3() of all three classes
int main(){
  derived obj;
  obj.fun1();
  obj.fun2();
  obj.fun3();
}