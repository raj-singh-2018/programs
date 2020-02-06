#include<iostream>
using namespace std;

class players{
  char *name;
  int score;
public:
  players(char *tname, int tscore){
    name = new char[20];
    strcpy(name, tname);
    score = tscore;
  }
  char* compare(players player2){
    if(this->score > player2.score)
      return this->name;
    else
      return player2.name;
  }
};

int main(){
  players player1("ABC", 343), player2("DEF", 342);
  cout<<player1.compare(player2)<<endl;
}