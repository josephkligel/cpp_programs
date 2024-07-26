#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <numeric>
#include "file.hpp"
using namespace std;

int main(){
	vector<string> keys = {"1", "2", "3"};
	vector<vector<string>> values = { {"this","that","there"}, 
		{"this", "that", "there"}, 
		{"this", "that", "there"} };

	string fn = "output";

	File f_obj(fn);

	cout << "Writing" << endl;

	for(string key: keys){
		//cout << key << endl;
		for(vector<string> value: values){
			//string s = accumulate(value.begin(), value.end(), string{});
			//cout << s << endl;
			f_obj.set_dictionary(key, value);
		}
	}

	f_obj.write_to_json();
	f_obj.write_to_csv();

	return 0;
}
