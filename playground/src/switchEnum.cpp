#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  enum Direction{
    left, right, up, down
  };

  Direction heading {left};

  switch (heading) {
    case left:
      cout << "Going left" << endl;
      break;
    case right:
      cout << "Going right" << endl;
      break;
    default:
      cout << "Ok";
  }

  return 0;
}
