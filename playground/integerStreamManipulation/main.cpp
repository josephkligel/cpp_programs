#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int num {255};

	// Display default integer formats
	std::cout << "\n----------------------------------" << std::endl;
	std::cout << std::dec << num << std::endl;
	std::cout << std::hex << num << std::endl;
	std::cout << std::oct << num << std::endl;

	// Showing base prefixes
	std::cout << "\n----------------------------------" << std::endl;
	std::cout << std::showbase;
	std::cout << std::hex << num << std::endl;
	std::cout << std::oct << num << std::endl;

	// Display in uppercase
	std::cout << "\n----------------------------------" << std::endl;
	std::cout << std::showbase << std::uppercase;
	std::cout << std::hex << num << std::endl;

	// Display positive sign
	std::cout << "\n----------------------------------" << std::endl;
	std::cout << std::showpos;
	std::cout << std::dec << num << std::endl;

	return 0;
}
