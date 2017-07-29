#include "rpsGame.hpp"
#include "paper.hpp"
#include "rock.hpp"
#include "scissors.hpp"
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
  cout << "\nHuman Wins: " << humanWins << endl;
  cout << "Computer Wins: " << computerWins << endl;
  cout << "Tie Games: " << tieGames << endl << endl;
  return;
}

void RPSGame::replay() {
  cout << "\nYou have chosen to replay!" << endl << endl;
  cout << "The current scoreboard is as follows:" << endl;
  gameStatus();
  playGame();
  return;
}

int RPSGame::computerChoice() {
  return (rand() % 3); // return 0, 1, 2 (rock/paper/scissors)
}

void RPSGame::playGame() {
  char userChoice;
  char userTool;
  int strength;
  int cpuChoice = computerChoice();
  cout << "\nWelcome to Rock, Paper, Scissors! Would you like to choose different ";
  cout << "strengths for the tools? (Y-Yes, N-No): " << endl;
  cin >> userChoice;

  cout << "\nPlease choose your tool: (R-Rock, P-Paper, S-Scissors): ";
  cin >> userTool;

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
  } else if (userChoice == 'y') {
    int cpuStrength = (rand() % 10) + 1;
    cout << "\nPlease choose an integer for the Strength of the tool: ";
    cin >> strength;

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
  }

  return;
}

void RPSGame::showMenu() {
  RPSMenu.displayMenu();
}

RPSGame::~RPSGame() {
  delete p1Tool;
  p1Tool = 0;
  delete compTool;
  compTool = 0;
}