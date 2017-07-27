#include "menu.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

Menu::Menu() {}

/****************************************************************
** Function: displayMenu
** Description: This will display the options for the user to 
                use for the RPS Game.
****************************************************************/

void Menu::displayMenu() {
  int choice;
  cout << "\n1: " << endl;
  cout << "2: " << endl;
  cout << "3: " << endl;
  cout << "4: Exit" << endl << endl;
  cout << "Please choose from one of the above options: ";
  cin >> choice;

  switch(choice) {
    case 1 : {
      cin.ignore();
      cout << "\n " << endl;
      displayMenu();
      break;
    }
    case 2 : {
      cin.ignore();
      cout << "\nPlease enter the size of the array you would like: ";
      displayMenu();
      break;
    }
    case 3 : {
      cin.ignore();
      displayMenu();
      break;
    case 4 :
      cin.ignore();
      cout << "Exiting the program." << endl << endl;
      break;
    }
    default : {
      cout << "Invalid choice, exiting the program." << endl << endl;
    }
  }
}
