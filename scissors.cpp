#include "scissors.hpp"
#include "tool.hpp"

Scissors::Scissors() : Tool() {
  type = 's';
}

Scissors::Scissors(int str, char t) : Tool () {
  this->setStrength(str);
  type = t;
}

char Scissors::getType() {
  return type;
}