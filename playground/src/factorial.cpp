#include <iostream>
using namespace std;

unsigned long long factorial(unsigned long long num);

int main(int argc, char const *argv[])
{
    int num;
    cout << "What number do you want the factorial of? ";
    cin >> num;
    cout << endl;

    int factorial_num = factorial(num);
    cout << "The factorial of " << num << " is " << factorial_num << endl;
    return 0;
}

unsigned long long factorial(unsigned long long num){
    if(!num) return 1;
    return num * factorial(num - 1);
}
