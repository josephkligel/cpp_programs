#include <iostream>
#include <memory>
#include <vector>
using namespace std;

int main(){
	std::shared_ptr<int> p1 { new int{100} };
	cout << p1.use_count() << endl;

	std::shared_ptr<int> p2 {p1};
	cout << p1.use_count() << endl;

	std::shared_ptr<int> p3 {p2};
	cout << p1.use_count() << endl;
	cout << endl;

	// p1.reset();
	// cout << p1.use_count() << endl;
	// cout << p2.use_count() << endl;

	std::vector<shared_ptr<int>> pointers {p1, p2};
	pointers.push_back(p3);
	for(const auto &ptr: pointers){
		cout << *ptr << ": " << ptr.use_count() << " count" << endl;
	}

	return 0;
}