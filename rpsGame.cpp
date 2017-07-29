#include "rpsGame.hpp"
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
  int cpuChoice = computerChoice();

  if (cpuChoice == R) {
    cout << "\nThe Computer has chosen Rock.";
  } else if (cpuChoice == P) {
    cout << "\nThe Computer has chosen Paper.";
  } else {
    cout << "\nThe Computer has chosen Scissors.";
  }


  return;
}

void RPSGame::showMenu() {
  RPSMenu.displayMenu();
}