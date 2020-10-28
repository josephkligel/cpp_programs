#include <iostream>
#include <string>
#include <set>

template<class T>
void display(std::set<T> s){
	for(const auto &elem: s)
		std::cout << elem << " ";
	std::cout << std::endl;
}

int main(){
	std::set<int> first_set {1, 2, 3, 4, 5};
	first_set.insert(4);
	display(first_set);
	return 0;
}
