#include<iostream>
using namespace std;

class base{
public:
  void fun(){
    cout<<"BASE CLASS"<<endl;
  }
};

class derived: public base{
public:
  void fun(){
    cout<<"DERIVED CLASS"<<endl;
  }
};

int main(){
  derived obj;
  obj.fun();
  obj.base::fun();
}