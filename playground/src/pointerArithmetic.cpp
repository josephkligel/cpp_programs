#include <iostream>
using namespace std;

int main()
{
    int scores[] {100, 95, 89, 68, -1};
    int *score_ptr {scores};

    while(*score_ptr != -1){
        cout << *score_ptr << endl;
        score_ptr++;
    }

    cout << endl << score_ptr-- << "\n\n"; 

    // cout << "\n";
    // while(*score_ptr != -1)
    //     cout << *score_ptr++ << endl;


    return 0;
}
