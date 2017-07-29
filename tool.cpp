/******************************************************

** Program: tool.cpp

** Authors:	Daniel Rotenberg
			Samuel Bernstein
			Jaycie David
			Robert McGugan


** Date: 07/15/2017

** Description:	This is the Tool class implementation
				file. It contains a default constructor,
				a set and a get method for the strength 
				data member, a get method for the tool
				type, and a destructor to clean up the 
				object after use.
*******************************************************/

#include "tool.hpp"
#include <iostream>

//default constructor
Tool::Tool() {
  strength = 1;
}

//set method
void Tool::setStrength(int str) {
  strength = str;
}


//get methods
int Tool::getStrength() {
  return strength;
}

char Tool::getType() {
  return type;
}

//destructor
Tool::~Tool() {}