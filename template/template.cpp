#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
// Creates a template for standard cpp programs
stringstream create_standard_cpp(){
	stringstream str_stream("");

	str_stream << "#include <iostream>" << endl;
	str_stream << "using namespace std;" << endl;
	str_stream << endl;
	str_stream << "int main(int argc, char** argv)"
		<< "{" << endl
		<< endl
		<< endl
		<< "\treturn 0;" << endl
		<< "}" << endl;

	return str_stream;
}
// Creates standard header in C or C++ style
stringstream create_standard_header(const string &filename, string ext="_HPP"){
	stringstream str_stream("");

	auto copy = filename;

	transform(copy.begin(), copy.end(), copy.begin(), ::toupper);

	copy.insert(copy.length(), ext);
	copy.insert(0, "__");

	str_stream << "#ifndef " << copy << endl
		<< "#define " << copy << endl
		<< endl << endl
		<< "#endif" << endl;

	return str_stream;
}
// Create template based on the filename provided and the type of template file to be created
int create_template(string filename, string type = "None"){
	stringstream str_stream(""); 
	
	if(type == "header"){
		str_stream = create_standard_header(filename);
		filename += ".hpp";
	}
	else if(type == "cheader"){
		str_stream = create_standard_header(filename, "_H");
		filename += ".h";
	}
	else {
		str_stream = create_standard_cpp();
		filename += ".cpp";
	}

	ofstream ofs(filename, ios::out);

	ofs << str_stream.str();

	return 0;
}

int main(int argc, char **argv){
	create_template(argv[1], argv[2]);
	
	return 0;
}
