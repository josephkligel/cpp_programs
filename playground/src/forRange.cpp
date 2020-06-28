#include <iostream>

using namespace std;

int main(){
	int scores [] {100, 90, 97};
	for(auto score: scores){
		cout << score << endl;
	}

	for(auto c: "This is a string")
		if(c == ' ')
			cout << "\t";
		else
			cout << c;
	cout << endl;
	return 0;
}
