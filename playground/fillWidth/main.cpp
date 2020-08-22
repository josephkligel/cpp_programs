#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	int ten_char {1234567890};
	double num {1234.5678};
	std::string hello {"hello"};

	std::cout << ten_char << std::endl;
	std::cout << std::setw(10) << std::setfill('~') << num << std::endl;

	std::cout << "\n" << std::setw(50) << std::setfill('=') << hello << std::left << std::setw(50) << ' ' << std::endl;

	return 0;
}
