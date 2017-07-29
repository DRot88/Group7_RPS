#include "tool.hpp"
#include "scissors.hpp"
#include <iostream>
using std::cout;
using std::endl;

Scissors::Scissors() : Tool() {
  type = 's';
}

Scissors::Scissors(int str, char t) : Tool () {
  this->setStrength(str);
  type = t;
}

Scissors::~Scissors(){};

char Scissors::getType() {
  return type;
}

void Scissors::fight(Tool t) {
  if (t.getType() == 'r') {
    cout << "Scissors is weak against Rock.." << endl;
    cout << "Scissors Strength this round: " << (this->getStrength() / 2) << endl;
    cout << "Rock Strength this round: " << t.getStrength() << endl;
    if((this->getStrength() / 2) > t.getStrength()) {
      cout << "Scissors Wins" << endl << endl;
    } else if ((this->getStrength() / 2) < t.getStrength()) {
      cout << "Rock Wins" << endl << endl;
    } else {
      cout << "It was a tie game!" << endl << endl;
    }
  }

  if (t.getType() == 'p') {
    cout << "Scissors is Strong against Paper.." << endl;
    cout << "Scissors Strength this round: " << (this->getStrength() * 2) << endl;
    cout << "Paper Strength this round: " << t.getStrength() << endl;
    if((this->getStrength() * 2) > t.getStrength()) {
      cout << "Scissors Wins" << endl << endl;
    } else if ((this->getStrength() * 2) < t.getStrength()) {
      cout << "Paper Wins" << endl << endl;
    } else {
      cout << "It was a tie game!" << endl << endl;
    }
  }

  if (t.getType() == 's') {
    cout << "Scissors vs Scissors.. Who would have thought?!?.." << endl;
    cout << "Scissors-1 Strength this round: " << this->getStrength() << endl;
    cout << "Scissors-2 Strength this round: " << t.getStrength() << endl;
    if(this->getStrength() > t.getStrength()) {
      cout << "Scissors-1 Wins" << endl << endl;
    } else if (this->getStrength() < t.getStrength()){
      cout << "Scissors-2 Wins" << endl << endl;
    } else {
      cout << "It was a tie game!" << endl << endl;
    }
  } 
}         
