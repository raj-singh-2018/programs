#include<iostream>
using namespace std;

int main(){
  int a = 20;
  try{
    if(a == 10)
      throw a;
    else
      throw 10.20;
  }
  catch(int X){
    cout<<"CAUGHT INTEGER EXCEPTION"<<endl;
  }
  catch(...){
    cout<<"DEFAULT CATCH HANDLER"<<endl;
  }
}