#include <iostream>
#include <string>
#include <vector>
using namespace std;

void display(vector<string> *v){
    for(auto str: *v)
        cout << str << " ";
    cout << endl;
    (*v)[0] = "Funny";
}


int main()
{
    cout << "-------------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);

    display(&stooges);
    return 0;
}
