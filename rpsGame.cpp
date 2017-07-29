/******************************************************

** Program: rpsGame.cpp

** Authors:	Daniel Rotenberg
			Samuel Bernstein
			Jaycie David
			Robert McGugan


** Date: 07/15/2017

** Description:
*******************************************************/

#include "rpsGame.hpp"
#include "paper.hpp"
#include "rock.hpp"
#include "scissors.hpp"
#include "validation.hpp"
#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;

RPSGame::RPSGame() {
  humanWins = 0;
  computerWins = 0;
  tieGames = 0;
}

void RPSGame::gameStatus() {
  cout << "Human Wins: " << humanWins << endl;
  cout << "Computer Wins: " << computerWins << endl;
  cout << "Tie Games: " << tieGames << endl;
  return;
}

int RPSGame::computerChoice() {
  return (rand() % 3); // return 0, 1, 2 (rock/paper/scissors)
}

void RPSGame::playGame() {
  char userChoice;
  char userTool = '\0';
  int strength;
  cout << "\nWelcome to Rock, Paper, Scissors! Would you like to choose different ";
  cout << "strengths for the tools? (Y-Yes, N-No): " << endl;
  getChar(userChoice, 'y', 'n');

  while(userTool!= 'e') {
    int cpuChoice = computerChoice();
    cout << "\nPlease choose your tool: (R-Rock, P-Paper, S-Scissors, E-Exit): ";
    getChar(userTool, 'r', 'p', 's','e');

    if (userTool == 'e') {
      cout << "Exiting Game" << endl;
      return;
    }

    if (userChoice == 'n') {
      if (userTool == 'r') {
        p1Tool = new Rock();
      } else if (userTool == 'p') {
        p1Tool = new Paper();
      } else {
        p1Tool = new Scissors();
      }

      if (cpuChoice == R) { //computer choice
        compTool = new Rock();
        cout << "\nThe Computer has chosen Rock." << endl;
      } else if (cpuChoice == P) {
        compTool = new Paper();
        cout << "\nThe Computer has chosen Paper." << endl;
      } else {
        compTool = new Scissors();
        cout << "\nThe Computer has chosen Scissors." << endl;
      }  

      int winner = (p1Tool->fight(compTool));
      if (winner == 3) {
        humanWins++;
      } else if (winner == 4) {
        computerWins++;
      } else {
        tieGames++;
      }
      gameStatus();   
      delete p1Tool;
      p1Tool = 0;
      delete compTool;
      compTool = 0;   
    } else if (userChoice == 'y') {
      int cpuStrength = (rand() % 10) + 1;
      cout << "\nPlease choose an integer for the Strength of the tool: ";
      strength = getMenu(1,10);

      if (userTool == 'r') {
        p1Tool = new Rock(strength, 'r');
      } else if (userTool == 'p') {
        p1Tool = new Paper(strength, 'p');
      } else {
        p1Tool = new Scissors(strength, 's');
      }

      if (cpuChoice == R) { //computer choice
        compTool = new Rock(cpuStrength, 'r');
        cout << "\nThe Computer has chosen Rock." << endl;
      } else if (cpuChoice == P) {
        compTool = new Paper(cpuStrength, 'p');
        cout << "\nThe Computer has chosen Paper." << endl;
      } else {
        compTool = new Scissors(cpuStrength, 's');
        cout << "\nThe Computer has chosen Scissors." << endl;
      }

      int winner = (p1Tool->fight(compTool));
      if (winner == 3) {
        humanWins++;
      } else if (winner == 4) {
        computerWins++;
      } else {
        tieGames++;
      }

      gameStatus();
      delete p1Tool;
      p1Tool = 0;
      delete compTool;
      compTool = 0;
    }
  }
  return;
}

RPSGame::~RPSGame() {}