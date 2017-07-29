#ifndef SCISSORS_HPP
#define SCISSORS_HPP
#include "tool.hpp"

class Scissors : public Tool {
  private:

  public:
    Scissors(); // default – set strength to 1, set type to ‘s’
    Scissors(int str, char t); // sets user defined strength
    ~Scissors();
    virtual char getType();
    void fight(Tool *t); // temp double strength against Paper, half strength vs Rock
};


#endif