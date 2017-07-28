#include "paper.hpp"
#include "tool.hpp"
#include <iostream>
using std::cout;
using std::endl;

Paper::Paper() : Tool() {
  type = 'p';
}

Paper::Paper(int str, char t) : Tool () {
  this->setStrength(str);
  type = t;
}

char Paper::getType() {
  return type;
}

void Paper::fight(Tool t) {
  if (t.getType() == 's') {
    cout << "Paper is weak against Scissors.." << endl;
    cout << "Paper Strength this round: " << (this->getStrength() / 2) << endl;
    cout << "Scissors Strength this round: " << t.getStrength() << endl;
    if((this->getStrength() / 2) > t.getStrength()) {
      cout << "Paper Wins" << endl << endl;
    } else if ((this->getStrength() / 2) < t.getStrength()) {
      cout << "Scissors Wins" << endl << endl;
    } else {
      cout << "It was a tie game!" << endl << endl;
    }
  }

  if (t.getType() == 'r') {
    cout << "Paper is Strong against Rock.." << endl;
    cout << "Paper Strength this round: " << (this->getStrength() * 2) << endl;
    cout << "Rock Strength this round: " << t.getStrength() << endl;
    if((this->getStrength() * 2) > t.getStrength()) {
      cout << "Paper Wins" << endl << endl;
    } else if ((this->getStrength() * 2) < t.getStrength()) {
      cout << "Rock Wins" << endl << endl;
    } else {
      cout << "It was a tie game!" << endl << endl;
    }
  }

  if (t.getType() == 'p') {
    cout << "Paper vs Paper.. Who would have thought?!?.." << endl;
    cout << "Paper-1 Strength this round: " << this->getStrength() << endl;
    cout << "Paper-2 Strength this round: " << t.getStrength() << endl;
    if(this->getStrength() > t.getStrength()) {
      cout << "Paper-1 Wins" << endl << endl;
    } else if (this->getStrength() < t.getStrength()){
      cout << "Paper-2 Wins" << endl << endl;
    } else {
      cout << "It was a tie game!" << endl << endl;
    }
  } 
}         
