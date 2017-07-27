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
  // RPSMenu.displayMenu();
  Tool newTool;
  Rock r1(5, 'r');
  Paper p1(12, 'p');
  Scissors s1(3, 's');

  cout << "New Tool Strength: " << newTool.getStrength() << endl;
  cout << "Rock Strength: " << r1.getStrength() << endl;
  cout << "Paper Strength: " << p1.getStrength() << endl;
  cout << "Scissors Strength: " << s1.getStrength() << endl << endl;

  cout << "Rock Type: " << r1.getType() << endl;
  cout << "Paper Type: " << p1.getType() << endl;
  cout << "Scissors Type: " << s1.getType() << endl << endl;

  return 0;
}