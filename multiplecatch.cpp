#include<iostream>
using namespace std;

int main(){
  int a = 0;
  try{
    if(a > 1){
      throw 1;
    }
    else if(a == 1)
      throw 'a';
    else
      throw 2.2;
  }
  catch(int X){
    cout<<"CAUGHT INTEGER EXCEPTION"<<endl;
  }
  catch(char X){
    cout<<"CAUGHT CHARACTER EXCEPTION"<<endl;
  }
  catch(double X){
    cout<<"CAUGHT DOUBLE EXCEPTION"<<endl;
  }
}