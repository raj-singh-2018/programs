#include<iostream>
#include<fstream>
using namespace std;

//Program for writing a string to a file, reading the string and displaying
//vowels from it

int main(){
  char s[20], t[20];
  ofstream out("output.txt");
  cout<<"Enter string"<<endl;
  cin>>s;
  out<<s<<endl;
  out.close();
  ifstream in("output.txt");
  in>>t;
  for(int i = 0; t[i] != '\0'; i++)
    if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u')
      cout<<t[i];
  cout<<endl;
  in.close();
}