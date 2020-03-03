#include<iostream>
using namespace std;

class character{
  char var;
public:
  character(char t){
    var = t;
  }
  bool operator <= (character o){
    return var <= o.var;
  }
};

int main(){
  character ob1('a'), ob2('b');
  cout<<(ob1 <= ob2)<<endl;
  cout<<(ob2 <= ob1)<<endl;
}