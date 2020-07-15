#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
   string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
   string randomLetters = "lahRFNBtCrziewmGDJdHEcxWLMTyXISgVbpkqjAOsUfPYQZuKvon";
   string input{};
   string encoded{};
   string decoded{};

   cout << "Type your secret message here: ";
   getline(cin, input);
   cout << "Encrypting string...\n\n";
   
   for(auto c: input){
	   if(isalpha(c))
		encoded += randomLetters[letters.find(c)];
	   else encoded += c;
   }
   for(auto c: encoded){
   	if(isalpha(c))
		decoded += letters[randomLetters.find(c)];
	else decoded += c;
   }

   cout << "Encrypted message: " << encoded << endl;
   cout << "Decrypted message: " << decoded << endl;
   
   return 0;
} 
