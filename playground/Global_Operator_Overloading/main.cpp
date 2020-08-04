#include <iostream>
#include <vector>
#include "Mystring.h"
using namespace std;

int main() {
    Mystring larry {"Larry"};
    larry.display();

    larry = -larry;
    larry.display();

    std::cout << boolalpha << std::endl;
    Mystring moe {"Moe"};
    Mystring stooge = larry;

    std::cout << (larry == moe) << std::endl;
    std::cout << (larry == stooge) << std::endl;

    Mystring stooges = "Larry";
    stooges.display();

    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();
    Mystring three_stooges = moe + larry + " " + "Curly";
    three_stooges.display();

    return 0;
}