#include <iostream>
#include <vector>
using namespace std;

void pass_by_ref(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v); //const

void pass_by_ref(int &num){
  num = 1000;
}

void pass_by_ref2(string &s){
  s = "Changed";
}

void pass_by_ref3(vector<string> &v){
  v.clear();
}

void print_vector(vector<string> &v){
  for(auto word: v)
    cout << word << endl;
}

int main(int argc, char const *argv[]) {
  int num {10};

  cout << "num is " << num << endl;
  pass_by_ref(num);
  cout << "pass_by_ref num is " << num << endl;

  string name {"frank"};
  cout << "\nname before calling pass_by_ref2: " << name << endl;
  pass_by_ref2(name);
  cout << "name after calling pass_by_ref2: " << name << endl;

  vector<string> stooges {"Larry", "Moe", "Curly"};
  cout << "\nstooges before calling pass_by_ref3: ";
  print_vector(stooges);
  pass_by_ref3(stooges);
  cout << "After calling pass_by_ref3: ";
  print_vector(stooges);
  cout << endl;

  return 0;
}
