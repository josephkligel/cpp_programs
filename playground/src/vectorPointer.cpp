#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> stooges{"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr{&stooges};

    vector_ptr = &stooges;

    cout << "First stooge: " << (*vector_ptr)[0] << endl;
    for(auto stooge: stooges)
        cout << stooge << " ";
    cout << endl;

    cout << endl;

    return 0;
}
