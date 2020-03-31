#include<iostream>
using namespace std;

void initialise(int a[], int n){
  try{
    int index = 0;
    while(1){
      if(index > n - 1 || index < 0)
        throw index;
      cout<<a[index++]<<endl;
    }
  }
  catch(int X){
    cout<<"ARRAY INDEX OUT OF BOUNDS"<<endl;
  }
}

int main(){
  int a[5] = {1, 2, 3, 4, 5};
  initialise(a, 5);
}