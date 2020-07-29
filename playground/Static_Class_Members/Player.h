#ifndef _PLAYER_H
#define _PLAYER_H
#include <string>

class Player{
    private:
        static int num_players;
        std::string name;
        int health;
        int exp;

    public:
        std::string get_name(){return name;}
        int get_health(){return health;}
        int get_exp(){return exp;}
        // Constructor
        Player(std::string n="None", int health=0, int exp=0);
        // Copy Constructor
        Player(const Player &source);
        // Destructor
        ~Player();

        static int get_num_players();
};

#endif