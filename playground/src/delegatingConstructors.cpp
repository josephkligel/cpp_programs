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
    Player(string n="None", int h=0, int x=0);
};

Player::Player(string n, int h, int x)
    : name{n}, health{h}, exp{x} {
        cout << name << endl;
        cout << "Three-args constructor" << endl;
    }


int main()
{
    Player empty;
    Player frank{"Frank"};
    Player hero {"Hero", 100};
    Player villian{"Villian", 100, 13};
    
    return 0;
}