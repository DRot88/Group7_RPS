#include "tool.hpp"

Tool::Tool() {
  strength = 1;
}

void Tool::setStrength(int str) {
  strength = str;
}

int Tool::getStrength() {
  return strength;
}