#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {
  string s0;
  string s1 {"Apple"};
  string s2 {"Banana"};
  string s3{"Kiwi"};
  string s4{"apple"};
  string s5{s1};
  string s6{s1, 0, 3};
  string s7(10, 'X');

  cout << s0 << endl;
  cout << s1 << endl;
  cout << s2 << endl;
  cout << s3 << endl;
  cout << s4 << endl;
  cout << s5 << endl;
  cout << s6 << endl;
  cout << s7 << endl;

  for(size_t i{0}; i < s1.length(); ++i)
    cout << s1[i] << endl;
  return 0;
}
