#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double num {255.7};

	std::cout << std::setprecision(3) << num << std::endl;

	std::cout << std::setprecision(3) << std::fixed << num << std::endl;

	return 0;
}
