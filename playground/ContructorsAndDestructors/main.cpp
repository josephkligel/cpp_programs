#include <iostream>
#include <string>
using namespace std;

class Player{
    private:
        std::string name;
        int health;
        int xp;
    public:
        void set_name(string n){name = n;}

    Player(){
        cout << "No args constructor called" << endl;
    }

    Player(string name){
        cout << "String arg contructor called" << endl;
    }

    Player(string name, int health, int xp){
        cout << "Three args constructor called" << endl;
    }

    ~Player(){
        cout << "Destructor called for " << name << endl;
    }
};

int main(){
    // Player slayer;
    // slayer.set_name("Slayer");

    // Player frank;
    // frank.set_name("Frank");
    // Player hero("Hero");
    // hero.set_name("Hero");
    // Player villian("Villian", 100, 12);
    // villian.set_name("Villian");

    Player *enemy = new Player;
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");

    delete enemy;
    delete level_boss;
}