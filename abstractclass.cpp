#include<iostream>
using namespace std;

class abstract{
public:
  virtual void fun() = 0;
};

class derived : public abstract{
public:
  void fun(){
    cout<<"DERIVED CLASS"<<endl;
  }
};

int main(){
  derived ob;
  ob.fun();
}