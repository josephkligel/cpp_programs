// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main() {
    std::ifstream in_file {"romeoandjuliet"};
    std::ofstream out_file {"numbered_output"};

    if(!in_file){
        std::cerr << "Error opening input file" << std::endl;
        return 1;
    }
    if(!out_file){
        std::cerr << "Error opening output file" << std::endl;
        return 1;
    }

    std::string line;
    int line_number {};
    // while(std::getline(in_file, line)){
    //     out_file << ++line_number << "\t" << line << std::endl;
    // }
    while(std::getline(in_file, line)){
        if(line.length() <= 1){
            out_file << line << std::endl;
        } else {
            out_file << ++line_number << "\t" << line << std::endl;
        }
    }

    std::cout << "File copied" << std::endl;

    in_file.close();
    out_file.close();
    return 0;
}

