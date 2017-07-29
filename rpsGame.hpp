#ifndef RPSGAME_HPP
#define RPSGAME_HPP
#include "menu.hpp"
#include "tool.hpp"

enum RPS {R, P, S};

class RPSGame {
   private:
    Menu RPSMenu;
     Tool* p1Tool;
     Tool* compTool;
     int humanWins;
     int computerWins;
     int tieGames;
  public:
     RPSGame(); //wins and ties set to 0
     ~RPSGame();
     void playGame(); // used to initiate gameplay
     void gameStatus(); // displays tools, winner/loser, stats for total wins/losses
     void replay(); // ask user to play again
     int computerChoice(); // method to have computer randomly choose tool
     void showMenu();
};


#endif