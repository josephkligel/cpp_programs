#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[]) {
  string input{};
  string spacelessString{};
  cout << "This program displays a pyramid based on the letters you provide :)" << "\n\n";

  cout << "Please type a string of letters here: ";
  getline(cin, input);

  for(char c: input){
      if(!isspace(c)){
        spacelessString += c;
      }
  }

  // for(int i{0}; i < spacelessString.length(); ++i){
  //
  //   for(int j{0}; j <= i; j++){
  //       cout << spacelessString[j];
  //       if(j == i) {
  //         j--;
  //         while(j >= 0){
  //           cout << spacelessString[j];
  //           j--;
  //         }
  //         break;
  //       }
  //     }
  //     cout << endl;
  //   }

    int inputLength = spacelessString.length();
    int position {0};

    for(char c: spacelessString){

      int num_of_spaces = inputLength - position;
      while(num_of_spaces > 0){
        cout << " ";
        --num_of_spaces;
      }

      for(size_t j{0}; j < position; j++){
        cout << spacelessString[j];
      }

      cout << c;

      for(int k{position-1}; k >= 0; --k){
        cout << spacelessString[k];
      }

      cout << endl;
      ++position;
    }

  return 0;
}
