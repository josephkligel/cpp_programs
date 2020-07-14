#include <iostream>
#include <cstring> //for c-style string functions
#include <cctype> //for character-based functions

using namespace std;

int main() {
  char firstName[20]{};
  char lastName[20]{};
  char fullName[50]{};
  char temp[50];

  cout << "What is your first name? ";
  cin >> firstName;
  cout << "What is your last name? ";
  cin >> lastName;

  cout << endl;

  cout << "Hello, " << firstName << ". Your first name is " << strlen(firstName) << " character(s)." << endl;
  cout << "As for your last name, " << lastName << ", it is " << strlen(lastName) << " character(s)." << endl;

  strcpy(fullName, firstName);
  strcat(fullName, " ");
  strcat(fullName, lastName);

  // cout << endl << "Your full name is " << fullName << ". It is " << strlen(fullName) - 1 << " character(s).";

  cout << endl << "What is your full name? ";
  cin.getline(temp, 50);
  cout << "Your full name is " << temp << endl;

  // if(strcmp(temp, fullName) == 0){
  //   cout << endl << temp << " and " << fullName << " are the same." << endl;
  // } else {
  //   cout << endl << temp << " and " << fullName << " are different." << endl;
  // }

  return 0;
}
