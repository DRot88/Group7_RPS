/******************************************************

** Program: validation.hpp

** Authors:	Daniel Rotenberg
			Samuel Bernstein
			Jaycie David
			Robert McGugan


** Date: 07/15/2017

** Description:	This is the header file for the input
				validation functions. It holds the
				prototypes for each of the functions so
				that they may be used with inclusion of
				this header file.
*******************************************************/

#ifndef VALIDATION_HPP
#define VALIDATION_HPP

void getChar(char&, char c1 = '\0', char c2 = '\0', char c3 = '\0', char c4 = '\0');
int getInt();
int getMenu(int lowerBound, int upperBound);

#endif