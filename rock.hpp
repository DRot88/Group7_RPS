/******************************************************

** Program: rock.hpp

** Authors:	Daniel Rotenberg
			Samuel Bernstein
			Jaycie David
			Robert McGugan


** Date: 07/15/2017

** Description:
*******************************************************/

#ifndef ROCK_HPP
#define ROCK_HPP
#include "tool.hpp"

class Rock : public Tool {
  private:
    
  public:
    ~Rock();
    Rock(); // default – set strength to 1, set type to ‘r’
    Rock(int str, char t); // sets user defined strength
    virtual char getType();
    int fight(Tool *t); // temp double strength against Scissors, half strength vs Paper
};


#endif