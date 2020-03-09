#include<iostream>
using namespace std;

class base{
protected:
  void display(){
    cout<<"BASE CLASS"<<endl;
  }
};

class derived: public base{
public:
  void display1(){
    display();
    cout<<"DERIVED CLASS"<<endl;
  }
};

int main(){
  derived dobj;
  dobj.display1();
}