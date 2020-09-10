#include <iostream>

int main(int argc, char *argv[]){
	std::cout << argc << " args were given"  << std::endl;
	for(size_t i{}; i < sizeof(*argv); i++){
		std::cout << i + 1 << ") " << argv[i] << std::endl;
	}
	return 0;
}
