/******************************************************

** Program: paper.cpp

** Authors:	Daniel Rotenberg
			Samuel Bernstein
			Jaycie David
			Robert McGugan


** Date: 07/15/2017

** Description:
*******************************************************/

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

Paper::~Paper(){};

char Paper::getType() {
  return type;
}

int Paper::fight(Tool *t) {
  if (t->getType() == 's') {
    cout << "Paper is weak against Scissors.." << endl;
    cout << "Paper Strength this round: " << (this->getStrength() / 2) << endl;
    cout << "Scissors Strength this round: " << t->getStrength() << endl;
    if((this->getStrength() / 2) > t->getStrength()) {
      cout << "Paper Wins" << endl << endl;
      return 3;
    } else if ((this->getStrength() / 2) < t->getStrength()) {
      cout << "Scissors Wins" << endl << endl;
      return 4;
    } else {
      cout << "It was a tie game!" << endl << endl;
      return 5;
    }
  }

  if (t->getType() == 'r') {
    cout << "Paper is Strong against Rock.." << endl;
    cout << "Paper Strength this round: " << (this->getStrength() * 2) << endl;
    cout << "Rock Strength this round: " << t->getStrength() << endl;
    if((this->getStrength() * 2) > t->getStrength()) {
      cout << "Paper Wins" << endl << endl;
      return 3;
    } else if ((this->getStrength() * 2) < t->getStrength()) {
      cout << "Rock Wins" << endl << endl;
      return 4;
    } else {
      cout << "It was a tie game!" << endl << endl;
      return 5;
    }
  }

  if (t->getType() == 'p') {
    cout << "Paper vs Paper.. Who would have thought?!?.." << endl;
    cout << "Paper-1 Strength this round: " << this->getStrength() << endl;
    cout << "Paper-2 Strength this round: " << t->getStrength() << endl;
    if(this->getStrength() > t->getStrength()) {
      cout << "Paper-1 Wins" << endl << endl;
      return 3;
    } else if (this->getStrength() < t->getStrength()){
      cout << "Paper-2 Wins" << endl << endl;
      return 4;
    } else {
      cout << "It was a tie game!" << endl << endl;
      return 5;
    }
  } 
  return -1;
}         
