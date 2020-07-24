#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int high_score{100};
    int low_score{5};

    const int *const score_ptr {&high_score};

    cout << *score_ptr << endl;
    *score_ptr = 25;
    return 0;
}
