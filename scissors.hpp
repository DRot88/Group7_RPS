/******************************************************

** Program: scissors.hpp

** Authors:	Daniel Rotenberg
			Samuel Bernstein
			Jaycie David
			Robert McGugan


** Date: 07/15/2017

** Description:	This is the Scissors class header file.
				Scissors inherit from the Tool class.
				Beyond a simple tool, scissors are weak
				against rocks and strong against paper.
				This class uses this relationship in the
				fight method. There are no additional
				data members beyond what a tool has.
*******************************************************/


#ifndef SCISSORS_HPP
#define SCISSORS_HPP
#include "tool.hpp"

class Scissors : public Tool {
  private:

  public:
    Scissors(); // default – set strength to 1, set type to ‘s’
    Scissors(int str, char t); // sets user defined strength
    ~Scissors();
    virtual char getType();
    int fight(Tool *t); // temp double strength against Paper, half strength vs Rock
};


#endif