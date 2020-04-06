#include<iostream>
using namespace std;

int main(){
  try{
    int a = 10;
    try{
      int b = 10;
      if(b == 10)
        throw b;
    }
    catch(int X){
      cout<<"INNER EXCEPTION"<<endl;
    }
    if(a == 10)
      throw a;
  }
  catch(int X){
    cout<<"OUTER EXCEPTION"<<endl;
  }
}