#ifndef PAPER_HPP
#define PAPER_HPP
#include "tool.hpp"

class Paper : public Tool {
  private:
    
  public:
    Paper(); // default – set strength to 1, set type to ‘p’
    ~Paper();
    Paper(int str, char t); // sets user defined strength
    virtual char getType();
    void fight(Tool t); // temp double strength against Rock, half strength vs scissors
};


#endif