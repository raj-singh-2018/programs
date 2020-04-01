#include<iostream>
using namespace std;

class DivideByZero{
  int num, den;
public:
  DivideByZero(int t1, int t2){
    num = t1;
    den = t2;
  }
  void print(){
      try{
        if(den == 0)
          throw den;
        cout<<(num / den)<<endl;
      }
      catch(int X){
        cout<<"Divide By Zero Exception Occurred"<<endl;
      }
  }
};

int main(){
  DivideByZero obj(4, 2);
  obj.print();
  DivideByZero obj1(5, 0);
  obj1.print();
}