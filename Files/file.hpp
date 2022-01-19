#ifndef _FILE_HPP
#define _FILE_HPP
#include <string>
#include <map>
#include <vector>
using namespace std;

class File{
	public:
		string filename = "";
		map<string, vector<string>> dictionary;

		File(string fn);

		void set_dictionary(string key, vector<string> values);

		void write_to_json();

		void write_to_csv();

};


#endif
