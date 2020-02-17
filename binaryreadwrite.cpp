#include<iostream>
#include<fstream>
using namespace std;

class employee{
  char name[20], designation[20];
  int id;
public:
  void input(){
    cout<<"ENTER NAME, DESIGNATION AND ID:"<<endl;
    cin>>name>>designation>>id;
  }
  void output(){
    cout<<"NAME: "<<name<<endl;
    cout<<"DESIGNATION: "<<designation<<endl;
    cout<<"ID: "<<id<<endl;
  }
};

int main(){
  fstream fout("output1.txt", ios::out | ios::in | ios::binary);
  employee _01, _02;
  _01.input();
  fout.write((char *) &_01, sizeof(_01));
  fout.seekg(0, ios::beg);
  fout.read((char *) &_02, sizeof(_02));
  _02.output();
  fout.close();
}