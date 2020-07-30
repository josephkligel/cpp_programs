#ifndef _MOVIE_H
#define _MOVIE_H
#include <string>

class Movie{
    private:
        std::string name;
        std::string rating;
        int watched;

    public:
        void set_name(std::string n){this->name = n; }
        void set_rating(std::string r){this->rating=r; }
        void set_watched(int w){this->watched = w; }

        std::string get_name()const{return name; }
        std::string get_rating()const{return rating; }
        int get_watched()const{return watched; }

        void increment_watched(){++watched; }

        void display() const;

        // Constructor
        Movie(std::string n, std::string r, int w);
        // Destructor
        ~Movie();
        // Copy Constructor
        Movie(const Movie &source);
};

#endif