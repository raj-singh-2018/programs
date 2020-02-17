#include<iostream>
using namespace std;

int main(){
  string s;
  getline(cin, s);
  for(int i = 0; s[i] != '\0'; i++)
    if(s[i] >= 'a' && s[i] <= 'z')
      s[i] = s[i] - 32;
  cout<<s<<endl;
}