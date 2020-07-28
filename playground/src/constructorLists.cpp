#include <iostream>
#include <string>
using namespace std;

class Player{
	private:
		string name {"XXXXXX"};
		int health, exp;

	public:
		Player();
		Player(string n);
		Player(string n, int h, int x);
};

Player::Player()
:name{"None"}, health{0}, exp{0}{}

Player::Player(string n)
:name{n}{}

Player::Player(string n, int h, int x)
:name{n}, health{h}, exp{x}{}

int main(){
	Player empty;
	Player frank {"Frank"};
	Player villian {"Villian", 100, 13};

	return 0;
}