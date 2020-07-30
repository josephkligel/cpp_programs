#include <iostream>
#include <string>
#include "Movie.h"
#include "Movies.h"
using namespace std;

Movies::Movies(){}

Movies::~Movies(){}

bool Movies::add_movie(std::string n, std::string r, int w)
{
	for (Movie const &movie : movies)
	{
		if(movie.get_name() == n)
			return false;
	}
	Movie temp {n, r, w};
	movies.push_back(temp);
	return true;
}

bool Movies::increment_watched(std::string n)
{
	for (auto &movie : movies)
	{
		if (movie.get_name() == n){
			movie.increment_watched();
			return true;
		}
	}
	return false;
}

void Movies::display() const
{
	if(movies.size() == 0)
		cout << "Sorry, no movies to display\n\n";
	else {
		cout << "==========================" << endl;

		for (auto movie : movies)
		{
			movie.display();
		}
		cout << "==========================" << endl;
	}
}
