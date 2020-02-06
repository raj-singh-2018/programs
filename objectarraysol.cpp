#include<iostream>
using namespace std;

class employee{
  char *name;
  int id;
public:
  employee(){
    name = new char[20];
    cout<<"CONSTRUCTOR"<<endl;
  }
  void input(){
    cout<<"ENTER NAME AND ID:"<<endl;
    gets(name);
    cin>>id;
    cin.ignore();
  }
  void display(){
    cout<<"NAME: "<<name<<endl;
    cout<<"ID: "<<id<<endl;
  }
  ~employee(){
    delete[] name;
    cout<<"DESTRUCTOR"<<endl;
  }
};

int main(){
  employee *e = new employee[5];
  for(int i = 0; i < 5; i++){
    (*(e + i)).input();
    e[i].display();
  }
  delete[] e;
}