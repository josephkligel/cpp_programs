#ifndef _SPLIT_HPP
#define _SPLIT_HPP
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> split(string str, string delim){
	string token;
	vector<string> tokens;
	size_t pos = 0;

	//Search for delimeter, and as long as it does not equal 'npos' then
	//append token to tokens vector
	while((pos = str.find(delim)) != string::npos){
		token = str.substr(0, pos);
		tokens.push_back(token);
		str.erase(0, pos + delim.length());
	}
	//Add the last word to tokens vector
	tokens.push_back(str);

	return tokens;
}

#endif
