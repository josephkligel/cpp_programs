#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
    string name;
    int health;
    int exp;

public:
    string get_name(){return name;}
    void set_name(string n){name = n;}
    int get_health(){return health;}
    int get_exp(){return exp;}

    Player(string n = "None", int h = 0, int x = 0);

    // Copy constructor
    Player(const Player &source);
    // Destructor
    ~Player(){cout << "Destructor is being called for: " << name << endl;}
};

Player::Player(string n, int h, int x)
    : name{n}, health{h}, exp{x}
{
    cout << "Three-args constructor" << endl;
}

Player::Player(const Player &source)
    // : name{source.name}, health{source.health}, exp{source.exp}
    :Player(source.name, source.health, source.exp)
{
    cout << "Copy constructor - made copy of " << source.name << endl;
}

void display_player(Player p){
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "Exp: " << p.get_exp() << endl;
}

int main()
{
    Player empty {"XXXXX", 100, 50};
    Player my_new_obj {empty};
    display_player(my_new_obj);

    Player frank{"Frank"};
    Player hero{"Hero", 100};
    Player villian{"Villian", 100, 13};

    return 0;
}