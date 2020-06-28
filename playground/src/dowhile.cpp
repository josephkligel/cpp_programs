#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	int number{};
	do{
		cout << "Enter an integer between 1 and 5: ";
		cin >> number;
	} while(number <= 1 || number >= 5);

	cout << "Thanks" << endl;

	return 0;
}
