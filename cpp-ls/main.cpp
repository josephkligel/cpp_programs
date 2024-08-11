#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = filesystem;

int main(int argc, char* argv[]){
	fs::path path = argv[1];
	/*
	for(const auto& entry: std::filesystem::directory_iterator(path)){
		cout << entry << '\n';
	}
	*/
}
