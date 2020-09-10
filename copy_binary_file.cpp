#include <iostream>
#include <fstream>
#include <string>

int main(){
	std::string file_name {};
	std::string line {};
	std::string output_file_name {"copied_"};

	std::cout << "\n----------- This is a C++ program that allows the user to copy any file. -----------\n\n"
		<< std::endl;

	std::cout << "Enter name of file you want to copy, including extension: ";
	std::cin >> file_name;

	output_file_name = output_file_name + file_name;

	std::ifstream in_file {file_name, std::ios::binary};
	std::ofstream out_file {output_file_name, std::ios::binary};

	//while(!in_file.eof()){
	//	out_file << in_file;
	//}
	
	out_file << in_file.rdbuf();

	std::cout << file_name << " copied as " << output_file_name << std::endl;


	return 0;
}
