// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    
    std::fstream in_file;
    in_file.open("romeoandjuliet.txt");
    int word_count;
    std::string word {};
    std::string search_word {};
    int search_count {};

    std::cout << "Enter the substring to search for: ";
    std::cin >> search_word;

    while (in_file >> word)
    {
        word_count++;
        if (word.find(search_word) != std::string::npos)
        {
            search_count++;
        }
    }

    std::cout << word_count << " words were searched..." << std::endl;
    std::cout << "The substring " << search_word << " was found " << search_count << " times" << std::endl;

    std::cout << std::endl;
    in_file.close();

    return 0;
}

