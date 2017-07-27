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
  Rock r1(4, 'r');
  Rock r2(12, 'r');
  Paper p1(2, 'p');
  Scissors s1(5, 's');

  cout << "New Tool Strength: " << newTool.getStrength() << endl;
  cout << "Rock Strength: " << r1.getStrength() << endl;
  cout << "Paper Strength: " << p1.getStrength() << endl;
  cout << "Scissors Strength: " << s1.getStrength() << endl << endl;

  cout << "Rock Type: " << r1.getType() << endl;
  cout << "Paper Type: " << p1.getType() << endl;
  cout << "Scissors Type: " << s1.getType() << endl << endl;

  r1.fight(p1);
  r1.fight(s1);
  r1.fight(r2);

  return 0;
}