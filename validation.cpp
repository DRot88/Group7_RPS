#include <iostream>
#include <cctype>
#include <cstdio>
#include <limits>
#include "validation.hpp"
using namespace std;

//character validation function
void getChar(char& character, char c1, char c2, char c3, char c4)
{
   //get value from user
   cin >> character;
      
   //if character is uppercase, make it lowercase to check validity
   if(isupper(character)){
      character = tolower(character);
   }
 
   //execute loop to check validity, repeat until valid input received
   while(cin.fail() || (character != c1 && character != c2 && character != c3 && character != c4)){
      if(cin.fail()){
         cout << "Input failed.  Please enter a character value." << endl;
      }
      else if(character != c1 && character != c2 && character != c3 && character != c4){
         cout << "Input is invalid.  See above for valid options." << endl;
      }
   
      //clear error flag or buffer for new value
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
      //prompt user to enter a new value
      cout << "Please enter a valid character: ";
      cin >> character;
   
      //if character is uppercase, make it lowercase to check validity
      if(isupper(character)){
         character = tolower(character);
      }
   }
   //clear buffer in case of extra characters
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
}