#include <iostream>

using namespace std;

int main(){
	int num {};
	cout << "Enter an integer: ";
	cin >> num;
	cout << endl;

	//cout << num << ((num % 2 == 0) ? " is even" : " is odd") << endl;

	int num1{}, num2{};
	if(num1 != num2){
		cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;	
	} else {
		cout << "The numbers are the same" << endl;
	}
	cout << endl;
	return 0;
}
