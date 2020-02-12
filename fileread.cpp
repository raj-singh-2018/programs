#include<iostream>
#include<fstream>
using namespace std;

class student{
  char name[20];
  int rollno;
public:
  void display(){
    cout<<"NAME: "<<name<<endl;
    cout<<"ROLL NO: "<<rollno<<endl;
  }
};

int main(){
  student _01;
  fstream fout("output1.txt", ios::in);
  fout.read((char *) &_01, sizeof(_01));
  _01.display();
  fout.close();
}