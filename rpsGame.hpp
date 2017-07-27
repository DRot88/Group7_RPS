#ifndef RPSGAME_HPP
#define RPSGAME_HPP

class RPSGame {
   private:
    Menu RPSMenu;
     Tool* p1Tool ;
     Tool* compTool;
     int humanWins;
     int computerWins;
     int tieGames;
  public:
     RPSGame(); //wins and ties set to 0
     playGame(); // used to initiate gameplay
     gameStatus(); // displays tools, winner/loser, stats for total wins/losses
     replay(); // ask user to play again
     computerChoice(); // method to have computer randomly choose tool
};


#endif