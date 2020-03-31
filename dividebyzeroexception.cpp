#include<iostream>
using namespace std;

int main(){
  int num, den, res;
  cin>>num>>den;
  try{
    if(den == 0)
      throw den;
    res = num / den;
    cout<<res<<endl;
  }
  catch(int X){
    cout<<"DIVIDE BY ZERO EXCEPTION"<<endl;
  }
}