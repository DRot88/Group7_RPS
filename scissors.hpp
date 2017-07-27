#ifndef SCISSORS_HPP
#define SCISSORS_HPP
#include "tool.hpp"

class Scissors : public Tool {
  private:
    char type;
  public:
    Scissors(); // default – set strength to 1, set type to ‘s’
    Scissors(int str, char s); // sets user defined strength
    // virtual void fight(); // temp double strength against Paper, half strength vs Rock
};


#endif