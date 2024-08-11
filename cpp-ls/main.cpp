#include <iostream>
#include <filesystem>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
	string path = argv[1];

	for(const auto& entry: std::filesystem::directory_iterator(path)){
		cout << entry << '\n';
	}
}
