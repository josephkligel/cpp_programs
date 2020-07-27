#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player{
public:
	// attributes
	string name {"Player"};
	int health {100};
	int exp {3};

	// methods
	bool is_dead();

	void talk(string text_to_say){
		cout << name << " says: " << text_to_say << endl;
	}
};

class Account{
public:
	// attributes
	string name {"Account"};
	double balance {100.00};

	// methods
	bool deposit(double bal){
		balance += bal;
		cout << "In balance" << endl;
	};
	bool withdraw(double bal){
		balance -= bal;
		cout << "In withdraw" << endl;
	
	};
};


int main()
{
	Account frank_accout;
	frank_accout.name = "Frank's accout";
	frank_accout.balance = 5000;

	frank_accout.deposit(1000);
	frank_accout.withdraw(500);

	cout << frank_accout.balance << endl;

	Player frank;
	frank.name = "Frank";
	frank.health = 100;
	frank.exp = 12;
	frank.talk("Hi there!");

	Player *enemy = new Player;
	(*enemy).name = "Enemy";
	(*enemy).health = 100;
	enemy->exp = 15;

	enemy->talk("I will destroy you!");

	return 0;
}

