#include<iostream>
using namespace std;

int main(){
  string s;
  getline(cin, s);
  for(int i = 0; s[i] != '\0'; i++)
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
      cout<<s[i];
  cout<<endl;
}