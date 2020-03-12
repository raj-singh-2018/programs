#include<iostream>
using namespace std;

class person{
  string name;
  int age;
public:
  void input(){
    cout<<"ENTER NAME AND AGE: "<<endl;
    cin>>name>>age;
  }
  void display(){
    cout<<"NAME: "<<name<<endl;
    cout<<"AGE: "<<age<<endl;
  }
};

class student : public person{
  int regno;
  string rollno, section;
public:
  void input1(){
    cout<<"ENTER REG NO, ROLL NO AND SECTION: "<<endl;
    cin>>regno>>rollno>>section;
  }
  void display1(){
    cout<<"REG NO: "<<regno<<endl;
    cout<<"ROLL NO: "<<rollno<<endl;
    cout<<"SECTION: "<<section<<endl;
  }
};

int main(){
    student _01;
    _01.input();
    _01.input1();
    _01.display();
    _01.display1();
}