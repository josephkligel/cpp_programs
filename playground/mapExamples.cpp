#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

template<class K, class V>
void display(std::map<K, V> m){
	std::cout << "\n" 
		<< std::setfill('_') << std::setw(20) << std::left << "Key"  
		<< std::setw(20) << "Value" 
		<< std::setfill(' ') << std::endl;
	for(const auto &elem: m){
		cout << std::setw(20) << std::left << elem.first
			<< elem.second << std::endl;
	}
}

int main(){
	std::map<int, char> first_map {
		{1, 'a'},
		{2, 'b'}
	};

	first_map.insert({3, 'c'});
	display(first_map);

	first_map.erase(3);
	first_map[4] = 'd';
	display(first_map);

	return 0;
}
