#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <deque>
#include <vector>
#include <algorithm>

bool is_palindrome(const std::string &s){
    std::deque<char> string_deque;
    std::deque<char> palindrome;
    for(auto const &ch: s){
        if(isalnum(ch)){
            string_deque.push_back(std::toupper(ch));
            palindrome.push_front(std::toupper(ch));
        }
    }

    if(string_deque == palindrome) return true;
    return false;
}

int main(){
    std::vector<std::string> test_strings {"a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana"
        "avid diva", "Amore Rome", "A Toyota's a toyota", "A Santa at NASA"
    };

    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto &s: test_strings){
        std::cout << std::setw(8) << std::left << is_palindrome(s) << ": " << s << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
