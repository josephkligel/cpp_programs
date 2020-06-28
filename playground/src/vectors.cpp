#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
  cout << "There are " << vowels.size() << " elements in the vowels vector.\n";
  for(int i {0}; i < vowels.size(); i++) cout << vowels[i];

  vector <vector<int>> movie_ratings
  {
    {1, 2, 3, 4},
    {1, 2, 3, 4},
    {1, 2, 3, 4}
  };
  cout << movie_ratings.size();
  for(int i {0}; i < movie_ratings.size(); i++){
    cout << endl << movie_ratings[i][i];
  }

  return 0;
}
