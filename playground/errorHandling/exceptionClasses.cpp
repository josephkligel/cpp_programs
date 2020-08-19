#include <iostream>
using namespace std;

class DivideByZero{

};

class NegativeValueException{

};

double calculate_mpg(int miles, int gallons){
	if(gallons == 0)
		throw DivideByZero();
	if(miles < 0 || gallons < 0)
		throw NegativeValueException();

	return static_cast<double>(miles)/gallons;
}

int main(){
	int gallons {0};
	int miles {0};
	double miles_per_gallon {};

	std::cout << "Enter the miles driven: ";
	std::cin >> miles;
	std::cout << "Enter the gallons used: ";
	std::cin >> gallons;

	try{
		miles_per_gallon = calculate_mpg(miles, gallons);
		std::cout << "Result: " << miles_per_gallon << std::endl;
	} catch(DivideByZero &ex){
		std::cerr << "Sorry, you can't divide by zero" << std::endl;
	} catch(NegativeValueException &ex){
		std::cerr << "Sorry, you can't use negative values" << std::endl;
	}

	std::cout << "Bye" << std::endl;

	return 0;
}