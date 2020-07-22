#include <iostream>
using namespace std;

int main()
{
//     double high_temp{100.7};
//     double low_temp{37.4};
//     double *temp_ptr {&high_temp};

//     cout << *temp_ptr << endl;

//     temp_ptr = &low_temp;
//     cout << *temp_ptr << endl;

    // int score{100};
    // int *score_ptr{&score};

    // cout << score_ptr << endl;

    // *score_ptr = 200;

    // cout << *score_ptr << endl;
    // cout << score << endl;

    string name{"Frank"};
    string *string_ptr{&name};

    cout << *string_ptr << endl;
    name = "James";
    cout << *string_ptr << endl;


    return 0;
}
