#include <iostream>

int main(){
	for(int i{1}; i <= 100; ++i){
		std::cout << i;
		std::cout << ((i % 10 == 0) ? "\n": " ");
	}
	return 0;
}
