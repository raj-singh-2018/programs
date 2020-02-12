#include<iostream>
#include<fstream>
using namespace std;

class student{
  char name[20];
  int rollno;
public:
  student(char tname[20], int troll){
    strcpy(name, tname);
    rollno = troll;
  }
};

int main(){
  student _01("ABC", 1);
  fstream fout("output1.txt", ios::out);
  fout.write((char *) &_01, sizeof(_01));
  fout.close();
}