#include<iostream>
using namespace std;

class student{
  double marks;
public:
  void input(){
    cout<<"ENTER MARKS: "<<endl;
    cin>>marks;
  }
  void display(){
    cout<<"MARKS: "<<marks<<endl;
  }
};

int main(){
  student obj[5];
  for(int i = 0; i < 5; i++)
      obj[i].input();
  obj[2].display();
  obj[1].display();
}