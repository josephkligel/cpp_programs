#include <iostream>
#include <string>
using namespace std;

void print_something(string text);

int main(int argc, char const *argv[]) {
  print_something("Hello");
  return 0;
}

void print_something(string text){
  cout << text << endl;
}
