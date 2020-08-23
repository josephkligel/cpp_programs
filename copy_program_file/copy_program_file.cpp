#include <fstream>
#include <iostream>
#include <string>

int main(){
    std::string file_name;

    std::cout << "Enter the name of the file you want copied here: ";
    std::getline(std::cin, file_name);

    std::ifstream in_file {file_name};
    std::ofstream out_file {"copied.cpp"};

    std::string line;
    while(std::getline(in_file, line)){
        out_file << line << std::endl;
    }

    std::cout << "Copied C++ program to a new file called copied.cpp successfully" << std::endl;


    return 0;
}