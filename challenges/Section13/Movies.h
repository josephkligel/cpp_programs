#ifndef _MOVIES_H
#define _MOVIES_H
#include <vector>
#include <string>
#include "Movie.h"

class Movies{
    private:
        std::vector<Movie> movies;

    public:
        bool add_movie(std::string n, std::string r, int w);
        bool increment_watched(std::string name);

        void display() const;

        Movies();
        ~Movies();
};

#endif