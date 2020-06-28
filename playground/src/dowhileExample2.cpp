#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	char selection{};
	do{
		cout << "\n------------" << endl;
		cout << "1. Do this" << endl;
		cout << "2. Do that" << endl;
		cout << "3. Do something else" << endl;
		cout << "Q. Quit" << endl;
		cout << "Enter your selection: ";
		cin >> selection;
		
		switch(selection){
			case '1':
				cout << "Doing this" << endl;
				break;
			case '2':
				cout << "Doing that" << endl;
				break;
			case '3':
				cout << "Doing something else" << endl;
				break;
			case 'Q':
			case 'q':
				cout << "Goodbye..." << endl;
				break;
			default:
				cout << "Unknown option - try again ...";
		}
	} while(selection != 'q' && selection != 'Q');

	
	return 0;
}
