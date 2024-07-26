#ifndef _PRINT_H
#define _PRINT_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename T>
void print_vec(vector<T> vec, string delim=" "){
	for(const auto &elem: vec){
		cout << elem << delim;
	}
	cout << endl;	
}

#endif
