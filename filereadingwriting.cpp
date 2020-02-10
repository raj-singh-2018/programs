#include<iostream>
#include<fstream>
using namespace std;

//Writing and reading from file

int main(){
  char name[20], name1[20];
  double marks, marks1;
  ofstream out("output.txt");
  cout<<"Enter Name and Marks:"<<endl;
  cin>>name>>marks;
  out<<name<<endl<<marks<<endl;
  out.close();
  ifstream in("output.txt");
  in>>name1>>marks1;
  cout<<"NAME: "<<name1<<endl;
  cout<<"MARKS: "<<marks1<<endl;
  in.close();
}