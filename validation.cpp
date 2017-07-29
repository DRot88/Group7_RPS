#include <iostream>
#include <cctype>
#include <cstdio>
#include <limits>
#include <string>
#include "validation.hpp"
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::streamsize;
using std::numeric_limits;

int getMenu(int lowerBound, int upperBound)
{
   int selection = -1;
   selection = getInt();

   while (selection < lowerBound || selection > upperBound)
   {
      //Print error message.
      cout << "Option not found in menu."
         << " Please enter a number between " << lowerBound << " and "
         << upperBound << ". ";

      //clear buffer
      cin.clear();
      cin.ignore(4096, '\n');
      
      selection = getInt();
   }
   return selection;
}

int getInt()
{
   bool invalidEntry = false;
   string stringInput;

   cin >> stringInput;
   //Check to make sure no character other than an integer 0-9 was entered.
   for (int i = 0; i < stringInput.length(); i++)
   {
      if (stringInput[i] != '0' && stringInput[i] != '1' && stringInput[i] != '2' && stringInput[i] != '3'
         && stringInput[i] != '4' && stringInput[i] != '5' && stringInput[i] != '6' && stringInput[i] != '7'
         && stringInput[i] != '8' && stringInput[i] != '9')
      {
         invalidEntry = true;
      }
   }

   while(invalidEntry)
   {
      //If a character other than 0-9 was entered, print error message, clear input buffer, and loop until proper input.
      cout << "You must enter an integer: ";
      cin.clear();
      cin.ignore(4096, '\n');
      invalidEntry = false;
      
      cin >> stringInput;
      //Check to make sure no character other than an integer 0-9 was entered.
      for (int i = 0; i < stringInput.length(); i++)
      {
         if (stringInput[i] != '0' && stringInput[i] != '1' && stringInput[i] != '2' && stringInput[i] != '3' 
            && stringInput[i] != '4' && stringInput[i] != '5' && stringInput[i] != '6' && stringInput[i] != '7' 
            && stringInput[i] != '8' && stringInput[i] != '9')
         {
            invalidEntry = true;
         }
      }
   }
   //convert to int and return
   return stoi(stringInput);
}

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