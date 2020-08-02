#include <iostream>
#include "Mystring.h"
using namespace std;

int main(){
    // Mystring empty;
    // Mystring larry {"Larry"};
    // Mystring stooges {larry};

    // empty.display();
    // larry.display();
    // stooges.display();

    Mystring a {"Hello"};
    Mystring b;
    b = a;
    b = "This is a test";

    return 0;
}