#ifndef PAPER_HPP
#define PAPER_HPP
#include "tool.hpp"

class Paper : public Tool {
  private:
    char type;
  public:
    Paper(); // default – set strength to 1, set type to ‘p’
    Paper(int str, char p); // sets user defined strength
    // virtual void fight(); // temp double strength against Rock, half strength vs scissors
};


#endif