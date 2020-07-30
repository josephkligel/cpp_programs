#include <iostream>
#include <string>
#include "Movies.h"
using namespace std;

void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);

void increment_watched(Movies &movies, std::string name){
	if(movies.increment_watched(name))
		cout << "watched incremented" << endl;
	else
		cout << "not found" << endl;
	
}

void add_movie(Movies &movies, std::string name, std::string rating, int watched){
		if(movies.add_movie(name, rating, watched))
			cout << name << " added" << endl;
		else
			std::cout << name << " already exists" << endl;
}

int main(){
	Movies my_movies;
	my_movies.display();

	add_movie(my_movies, "Big", "PG-13", 2);
	add_movie(my_movies, "Star Wars", "PG", 5);
	add_movie(my_movies, "Cinderella", "PG", 7);

	my_movies.display();

	add_movie(my_movies, "Cinderella", "PG", 7);
	add_movie(my_movies, "Ice Age", "PG", 3);

	my_movies.display();

	increment_watched(my_movies, "Big");
	increment_watched(my_movies, "Ice Age");

	my_movies.display();

	increment_watched(my_movies, "XXX");

	return 0;
}