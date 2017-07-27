#include "rock.hpp"
#include "tool.hpp"

Rock::Rock() : Tool() {
  type = 'r';
}

Rock::Rock(int str, char t) : Tool () {
  this->setStrength(str);
  type = t;
}