#include <iostream>
#include <string>

using namespace std;

int main(){
  string s1 {"Frank"};

  for(char c: s1)
    cout << c << endl;

  cout << endl << s1.substr(0, 2) << endl;
  cout << s1.find("a") << endl;

  string s2{};
  cout << "Type something here: ";
  getline(cin, s2, 'x');
  cout << s2 << endl;
}
