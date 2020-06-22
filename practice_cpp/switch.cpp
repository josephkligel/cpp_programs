#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int x;
  cout << "How many girlfriends do you have? ";
  cin >> x;

  switch(x){
    case 0:
    case 1:
    case 2:
      cout << "That's ok." << endl;
      break;
    case 3:
    case 4:
      cout << "That is quite a bit!" << endl;
      break;
    default:
      cout << "Wow!!!!" << endl;
  }
  return 0;
}
