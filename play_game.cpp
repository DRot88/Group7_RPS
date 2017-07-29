/******************************************************

** Program: play_game.cpp

** Author:	Daniel Rotenberg
			Samuel Bernstein
			Jaycie David
			Robert McGugan


** Date: 07/15/2017

** Description:	This file contains the main driver
				program for the Rock Paper Scissors game.
				It seeds random numbers, creates a game,
				then plays that game.
*******************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "tool.hpp"
#include "rock.hpp"
#include "paper.hpp"
#include "scissors.hpp"
#include "rpsGame.hpp"
using std::cout;
using std::cin;
using std::endl;

int main() {
	//Seed Random
	srand(time(0));
	RPSGame rps;
	rps.playGame();

	return 0;
}