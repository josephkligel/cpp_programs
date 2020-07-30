#include <iostream>
#include <string>
#include "Movie.h"
using namespace std;

void Movie::display() const{
	cout << "Name: " << this->name << endl;
	cout << "Rating: " << this->rating << endl;
	cout << "Watched: " << this->watched << endl;
	cout << endl;
}

Movie::Movie(std::string n, std::string r, int w)
	:name{n}, rating{r}, watched{w}
{}

Movie::~Movie(){}

Movie::Movie(Movie const &source)
	:Movie(source.name, source.rating, source.watched)
{}