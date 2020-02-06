#include<iostream>
#include<fstream>
using namespace std;

int main(){
  ofstream out("output.txt");
  int n;
  out<<100<<endl;
  out.close();
  ifstream in("output.txt");
  in>>n;
  cout<<"READ: "<<n<<endl;
  in.close()
}