#include<iostream>
using namespace std;

class Number{
  int var1;
  double var2;
public:
  Number(int t1, double t2){
    var1 = t1;
    var2 = t2;
  }
  void operator --(){
    --var1;
    --var2;
  }
  void display(){
    cout<<var1<<" "<<var2<<endl;
  }
};

int main(){
  Number o(10, 9.5);
  --o;
  o.display();
}