/******************************************************

** Program: tool.cpp

** Authors:	Daniel Rotenberg
			Samuel Bernstein
			Jaycie David
			Robert McGugan


** Date: 07/15/2017

** Description:	This is the header file for the Tool
				class. A tool has a strength and a type.
				This type can be r-rock, p-paper, or 
				s-scissors. This class is used for
				polymorphism with the three object files
				previously mentioned. As a result, 
				the getType and fight functions are pure
				virtual members of this class so that
				they may be called regardless of the
				tool's type in the RPSGame class.
*******************************************************/


#ifndef TOOL_HPP
#define TOOL_HPP

class Tool {
  protected:
    int strength;
    char type;
  public:
    Tool();
    virtual ~Tool();
    void setStrength(int str);
    int getStrength();
    virtual char getType();
    virtual int fight(Tool *) = 0; // potentially pure virtual function
};

#endif