#include "rock.hpp"
#include "tool.hpp"
#include <iostream>
using std::cout;
using std::endl;

Rock::Rock() : Tool() {
  type = 'r';
}

Rock::~Rock() {}

Rock::Rock(int str, char t) : Tool () {
  this->setStrength(str);
  type = t;
}

char Rock::getType() {
  return type;
}

void Rock::fight(Tool *t) {
  if (t->getType() == 'p') {
    cout << "Rock is weak against paper.." << endl;
    cout << "Rock Strength this round: " << (this->getStrength() / 2) << endl;
    cout << "Paper Strength this round: " << t->getStrength() << endl;
    if((this->getStrength() / 2) > t->getStrength()) {
      cout << "Rock Wins" << endl << endl;
    } else if ((this->getStrength() / 2) < t->getStrength()) {
      cout << "Paper Wins" << endl << endl;
    } else {
      cout << "It was a tie game!" << endl << endl;
    }
  }

  if (t->getType() == 's') {
    cout << "Rock is Strong against Scissors.." << endl;
    cout << "Rock Strength this round: " << (this->getStrength() * 2) << endl;
    cout << "Scissors Strength this round: " << t->getStrength() << endl;
    if((this->getStrength() * 2) > t->getStrength()) {
      cout << "Rock Wins" << endl << endl;
    } else if ((this->getStrength() * 2) < t->getStrength()) {
      cout << "Scissors Wins" << endl << endl;
    } else {
      cout << "It was a tie game!" << endl << endl;
    }
  }

  if (t->getType() == 'r') {
    cout << "Rock vs Rock.. Who would have thought?!?.." << endl;
    cout << "Rock-1 Strength this round: " << this->getStrength() << endl;
    cout << "Rock-2 Strength this round: " << t->getStrength() << endl;
    if(this->getStrength() > t->getStrength()) {
      cout << "Rock-1 Wins" << endl << endl;
    } else if (this->getStrength() < t->getStrength()){
      cout << "Rock-2 Wins" << endl << endl;
    } else {
      cout << "It was a tie game!" << endl << endl;
    }
  }          

}