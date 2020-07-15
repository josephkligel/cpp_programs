#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  std::string s1{"Apple"};
  std::string s2{"Orange"};

  s1.swap(s2); // or std::swap(s1, s2)
  std::cout << "s1 is " << s1 << std::endl;
  std::cout << "s2 is " << s2 << std::endl;
  return 0;
}
