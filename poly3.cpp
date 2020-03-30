#include<iostream>
using namespace std;

class base{
public:
   void virtual fun(){
    cout<<"BASE CLASS"<<endl;
  }
};

class derived : public base{
public:
  void fun(){
    cout<<"DERIVED CLASS"<<endl;
  }
};

int main(){
  base obj, *ptr = &obj;
  ptr->fun();
  derived obj1;
  ptr = &obj1;
  ptr->fun();
}