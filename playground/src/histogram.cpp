#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]){
	int num_items{};

	cout << "How many items do you want? ";
	cin >> num_items;
	cout << endl;

	vector<int> data;

	for(int i{1}; i <= num_items; ++i){
		int data_item{};
		cout << "Enter data item "<< i << ": ";
		cin >> data_item;
		data.push_back(data_item);
	}

	cout << "\nDisplaying Histogram" << endl;
	for(auto val: data){
		for(int i{1}; i<=val; ++i){
			if(i % 5 == 0)
				cout << "*";
			else
				cout << "-";
		}
		cout << endl;
	}

	cout << endl;
	return 0;
}
