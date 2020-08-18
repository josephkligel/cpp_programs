#include <iostream>
using namespace std;

int main(){
	int miles {0};
	int gallons {};
	double miles_per_gallon {};

	std::cout << "Enter the miles: ";
	cin >> miles;
	std::cout << "Enter the gallons: ";
	cin >> gallons;

	try{
		if(gallons == 0)
			throw 0;
		miles_per_gallon = static_cast<double>(miles) / gallons;
		std::cout << "Result:" << miles_per_gallon << std::endl;
	} catch(int &ex){
		std::cerr << "Sorry, you can't divide by 0" << std::endl;
	}

	std::cout << "Bye" << std::endl;

	return 0;
}