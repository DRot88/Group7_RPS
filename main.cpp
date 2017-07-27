#include <iostream>
#include "menu.hpp"
#include "tool.hpp"
#include "rock.hpp"
#include "paper.hpp"
#include "scissors.hpp"
using std::cout;
using std::cin;
using std::endl;

int main() {
  Menu RPSMenu;
  cout << "\nWelcome to RPS!" << endl << endl;
  RPSMenu.displayMenu();

  return 0;
}