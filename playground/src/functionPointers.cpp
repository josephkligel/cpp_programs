#include <iostream>
using namespace std;

void double_value(int *int_ptr){
    *int_ptr *= 2;
}

int main()
{
    int value {10};
    int *int_ptr{nullptr};

    cout << "Value: " << value << endl;
    double_value(&value);
    cout << "Value: " << value << endl;

    cout << "---------------------------" << endl;
    int_ptr = &value;
    double_value(int_ptr);
    cout << "Value: " << value << endl;

    return 0;
}
