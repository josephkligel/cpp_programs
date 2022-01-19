#include <fstream>
#include <map>
#include <vector>
#include <fstream>
#include "file.hpp"
using namespace std;

File::File(string fn){
	this->filename = fn;
}

void File::set_dictionary(string key, vector<string> values){
	this->dictionary.emplace(key, values);
}

void File::write_to_json(){
	ofstream ofs(this->filename+".json", ios::out);


	ofs << "{" << endl;
	
	for(const auto& elem: this->dictionary){
		ofs << "\t" << elem.first << ": " << "[" << endl;
		for(const auto &sub_elem: elem.second){
			ofs << "\t\t" << sub_elem;
			( &sub_elem == &elem.second.back() ) ? ofs << "" : ofs << ",";
			ofs << endl;

		}
		ofs << "\t]," << endl;
	}

	ofs << "}" << endl;

	ofs.close();
}

void File::write_to_csv(){
	ofstream ofs(this->filename+".csv");
	for(const auto& elem: this->dictionary){
		ofs << elem.first;
		for(const auto& sub_elem: elem.second)
			ofs << "," << sub_elem;
		ofs << endl;
	}

	ofs.close();

}

