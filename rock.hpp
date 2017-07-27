#ifndef ROCK_HPP
#define ROCK_HPP
#include "tool.hpp"

class Rock : public Tool {
  private:
    char type;
  public:
    Rock(); // default – set strength to 1, set type to ‘r’
    Rock(int str, char t); // sets user defined strength
    // virtual void fight(); // temp double strength against Scissors, half strength vs Paper
};


#endif