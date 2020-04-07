#include<iostream>
using namespace std;

template<class T>
void bsort(T a[], int n){
  for(int i = 0; i < n; i++)
    for(int j = i + 1; j < n; j++)
      if(a[i] > a[j])
        swap(a[i], a[j]);
}

int main(){
  int a[] = {5, 2, 1, 3, 4};
  bsort(a, 5);
  for(int i = 0; i < 5; i++)
    cout<<a[i]<<" ";
  char b[] = {'z', 'a', 'b', 'd', 'c'};
  bsort(b, 5);
  cout<<endl;
  for(int i = 0; i < 5; i++)
    cout<<b[i]<<" ";
  cout<<endl;
  double c[] = {4.4, 3.3, 1.1, 2.2, 5.5};
  bsort(c, 5);
  for(int i = 0; i < 5; i++)
    cout<<c[i]<<" ";
  cout<<endl;
}