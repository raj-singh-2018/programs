#include<iostream>
using namespace std;

int main(){
  try{
    int a = 10;
    try{
      if(a == 10)
        throw a;
    }
    catch(int X){
      cout<<"FIRST CATCH BLOCK"<<endl;
      throw;
    }
  }
  catch(...){
    cout<<"RETHROWN EXCEPTION CAUGHT"<<endl;
  }
}