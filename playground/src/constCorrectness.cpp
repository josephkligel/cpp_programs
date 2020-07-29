#include <iostream>
#include <string>
using namespace std;

class Player{
	private:
		string name;
		int health;
		int exp;
	public:
		string get_name() const{return name;}
		void set_name(string n){name = n;}
		// Constructor
		Player();
		Player(string n);
		Player(string n, int h, int x);
};

Player::Player()
	:Player("None", 0, 0){}

Player::Player(string n)
	:Player(n, 0, 0){}

Player::Player(string n, int h, int x)
	: name{n}, health{h}, exp{x}{}

void display_name(Player p){
	cout << p.get_name() << endl;
}

int main(){
	const Player villain {"Villain", 100, 55};
	Player hero {"Hero", 0, 0};

	display_name(villain);


	return 0;
}