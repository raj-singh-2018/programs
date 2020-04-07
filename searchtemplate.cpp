#include<iostream>
using namespace std;

template<class T>
bool lsearch(T a[], T val, int n){
  for(int i = 0; i < n; i++)
    if(a[i] == val)
      return true;
  return false;
}

int main(){
  int a[] = {1, 2, 3, 4, 5}, val = 4;
  if(lsearch(a, val, 5))
    cout<<"FOUND"<<endl;
  else
    cout<<"NOT FOUND"<<endl;
  double b[] = {1.1, 2.2, 3.3, 4.4, 5.5}, dval = 6.6;
  if(lsearch(b, dval, 5))
    cout<<"FOUND"<<endl;
  else
    cout<<"NOT FOUND"<<endl;
}