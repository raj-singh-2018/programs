#include<iostream>
using namespace std;

class student{
  int rollno, age;
public:
  student(){

  }
  student(int troll, int tage){
    this->rollno = troll;
    this->age = tage;
  }
  void display(){
    cout<<"ROLL NUMBER: "<<this->rollno<<endl;
    cout<<"AGE: "<<this->age<<endl;
  }
  student compare(student _02){
    if((*this).age < _02.age)
      return _02;
    else
      return *this;
  }
};

int main(){
  student _01(1, 25), _02(2, 16);
  // _01.display();
  // _02.display();
  student _03 = _01.compare(_02);
}