#include <iostream>
#include "int_length.hpp"

int int_length(int* array){
	size_t count = 0;
	while(*array != '\0'){
		count++;
		*(array++);
	}
	return count;
}

