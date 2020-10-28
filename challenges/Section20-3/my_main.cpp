#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <map>
#include <set>
#include <algorithm>

template<class K, class V>
void display(std::map<K, V> m){
    for(const auto &word: m){
        std::cout << word.first << ": " << word.second << std::endl;
    }
}

std::string return_alpha_char(std::string s){
    std::string alpha_word;
    for(const auto &ch: s){
        if(isalpha(ch)){
            alpha_word += ch;
        }
    }
    return alpha_word;
}

int main(){
    std::map<std::string, int> words;
    std::string unique_word;
    std::ifstream infile {"words.txt"};

    while(!infile.eof()){
        infile >> unique_word;
        std::transform(unique_word.begin(), unique_word.end(), unique_word.begin(), ::tolower);
        words[unique_word] += 1;
    }

    infile.close();

    display(words);
    // std::cout << return_alpha_char("dorothy's") << std::endl;


    return 0;
}