#include <iostream>
#include <vector>

using namespace std;

vector<int> numbers {1, 2, 3, 4, 5};
int x {};

int main(int argc, char *argv[]){
	char choice{};

	do {
		cout << "P - Print numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display mean of numbers" << endl;
		cout << "S - Display the smallest number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "Q - Quit program" << endl;
		cout << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		cout << "You chose " << choice << endl;

		switch (choice) {
			case 'P':
			case 'p':
			{
				if(!numbers.size()) cout << "This list is empty"<< endl;
				for(auto num: numbers)
					cout << num << " ";
				cout << "\n\n";
				break;
			}
			case 'A':
			case 'a':
			{
				cout << "Enter a number: ";
				cin >> x;
				numbers.push_back(x);
				cout << x << " was added to the numbers list";
				cout << "\n\n";
				break;
			}
			case 'M':
			case 'm':
			{
				int sum{};
				for(auto num: numbers){
					sum += num;
				}
				cout << "The mean is " << sum/numbers.size();
				cout << "\n\n";
				break;
			}
			case 'S':
			case 's':
			{
				int smallest{numbers[0]};
				for(int i{0}; i < numbers.size(); i++){
					if(numbers[i] < smallest) smallest = numbers[i];
				}
				cout << "The smallest number is " << smallest;
				cout << "\n\n";
				break;
			}
			case 'L':
			case 'l':
			{
				int largest{numbers[0]};
				for(auto num: numbers){
						if(num > largest) largest = num;
				}
				cout << "The largest number is " << largest;
				cout << "\n\n";
				break;
			}
			case 'Q':
			case 'q':
				cout << "Goodbye...";
				cout << "\n\n";
				break;
			default:
				cout << "Unknown option - Try again...";
				cout << "\n\n";
		}
	} while(choice != 'Q' && choice != 'q');

	return 0;
}
