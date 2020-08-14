#include <iostream>
#include <memory>
using namespace std;

int main(){
	int *ptr = new int(50);
	cout << *ptr << endl;
	std::unique_ptr<int> p1 { new int {100} };
	cout << *p1 << endl;

	auto p2 = make_unique<int>(200);

	std::unique_ptr<int> p3;
	p3 = std::move(p1);
	cout << *p3 << endl;
	
	// if(!p1)
	// 	cout << "P1 is null pointer" << endl;

	std::unique_ptr<int> a1 = std::make_unique<double>(2000.0);

	return 0;
}