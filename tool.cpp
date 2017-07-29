#include "tool.hpp"
#include <iostream>

Tool::Tool() {
  strength = 1;
}

void Tool::setStrength(int str) {
  strength = str;
}

int Tool::getStrength() {
  return strength;
}

char Tool::getType() {
  return type;
}

Tool::~Tool() {}