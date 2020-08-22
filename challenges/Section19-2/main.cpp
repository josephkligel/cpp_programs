// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

void print_header(){
    std::cout << std::setw(10) << std::left << "Names"
        << std::setw(10) << std::right << "Grades" << std::endl;
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');
}

double print_average(int total, int size){
    double average = static_cast<double>(total)/size;
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ') << setw(10) << std::left << "Average:"
        << std::setw(10) << std::right << average << std::endl;
}

int main() {
    std::fstream in_file;
    std::string key {};
    std::string name {};
    std::string answer {};
    int total {};
    int number_of_testers {};
    int score {};
    in_file.open("responses.txt");

    if(!in_file){
        std::cerr << "File could not be opened" << std::endl;
        return 1;
    }

    print_header();

    std::cout << std::setprecision(1) << std::fixed;

    in_file >> key;
    while(in_file >> name >> answer){
        for(size_t i{}; i < key.size(); ++i){
            if(answer[i] == key[i])
                score++;
        }
        std::cout << std::setw(10) << std::left << name << std::setw(10) << std::right << score << std::endl;
        number_of_testers++;
        total += score;
        score = 0;
    }
    print_average(total, number_of_testers);

    in_file.close();
    return 0;
}

