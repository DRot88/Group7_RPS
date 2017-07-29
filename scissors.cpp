/******************************************************

** Program: scissors.cpp

** Authors:	Daniel Rotenberg
			Samuel Bernstein
			Jaycie David
			Robert McGugan


** Date: 07/15/2017

** Description:	This is the Scissors class 
				implementation file. It contains a 
				default constructor, an overload 
				constructor, a get method that can be
				called by the Tool class polymorphically,
				a destructor, and a fight function.
*******************************************************/

#include "tool.hpp"
#include "scissors.hpp"
#include <iostream>
using std::cout;
using std::endl;

//default constructor
Scissors::Scissors() : Tool() {
  type = 's';
}


//overload constructor
Scissors::Scissors(int str, char t) : Tool () {
  this->setStrength(str);
  type = t;
}

//destructor
Scissors::~Scissors(){};

//get method
char Scissors::getType() {
  return type;
}

/****************************************************
* This function takes in a pointer to a tool. It	*
* checks for what type the tools are and temporarily*
* adjusts their strengths accordingly. It then		*
* displays a message that informs the user of what	*
* the outcome of the fight was and returns an int	*
* used by the RPSGame class to increment scoreboard	*
* options.											*
****************************************************/
int Scissors::fight(Tool *t) {
  if (t->getType() == 'r') {
    cout << "Scissors is weak against Rock.." << endl;
    cout << "Scissors Strength this round: " << (this->getStrength() / 2) << endl;
    cout << "Rock Strength this round: " << t->getStrength() << endl;
    if((this->getStrength() / 2) > t->getStrength()) {
      cout << "Scissors Wins" << endl << endl;
      return 3;
    } else if ((this->getStrength() / 2) < t->getStrength()) {
      cout << "Rock Wins" << endl << endl;
      return 4;
    } else {
      cout << "It was a tie game!" << endl << endl;
      return 5;
    }
  }

  if (t->getType() == 'p') {
    cout << "Scissors is Strong against Paper.." << endl;
    cout << "Scissors Strength this round: " << (this->getStrength() * 2) << endl;
    cout << "Paper Strength this round: " << t->getStrength() << endl;
    if((this->getStrength() * 2) > t->getStrength()) {
      cout << "Scissors Wins" << endl << endl;
      return 3;
    } else if ((this->getStrength() * 2) < t->getStrength()) {
      cout << "Paper Wins" << endl << endl;
      return 4;
    } else {
      cout << "It was a tie game!" << endl << endl;
      return 5;
    }
  }

  if (t->getType() == 's') {
    cout << "Scissors vs Scissors.. Who would have thought?!?.." << endl;
    cout << "Scissors-1 Strength this round: " << this->getStrength() << endl;
    cout << "Scissors-2 Strength this round: " << t->getStrength() << endl;
    if(this->getStrength() > t->getStrength()) {
      cout << "Scissors-1 Wins" << endl << endl;
      return 3;
    } else if (this->getStrength() < t->getStrength()){
      cout << "Scissors-2 Wins" << endl << endl;
      return 4;
    } else {
      cout << "It was a tie game!" << endl << endl;
      return 5;
    }
  } 
  return -1;
}         
