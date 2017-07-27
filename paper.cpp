#include "paper.hpp"
#include "tool.hpp"

Paper::Paper() : Tool() {
  type = 'p';
}

Paper::Paper(int str, char t) : Tool () {
  this->setStrength(str);
  type = t;
}

char Paper::getType() {
  return type;
}