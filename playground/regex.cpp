#include <iostream>
#include <string>
#include <regex>

void printIterMatches(std::string s, std::regex r){
	std::sregex_iterator next (s.begin(), s.end(), r);
	std::sregex_iterator end;
	while(next != end){
		std::smatch match = *next;
		std::cout << match.str() << "\n";
		next++;
	}

	std::cout << std::endl;	
}

void printSearchMatches(std::string s, std::regex r){
	std::smatch m;
	while(std::regex_search(s, m, r)){
		for(auto x: m)
			std::cout << x << std::endl;
		s = m.suffix().str();
	}
}

int main(){
	std::string str {"Hal has had enough!"};
	std::regex reg {"ha."};

	printIterMatches(str, reg);
	std::cout << "===================\n";
	printSearchMatches(str, reg);

	return 0;
}
