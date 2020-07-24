#include <iostream>
using namespace std;

int *create_array(size_t size, int int_value = 0){
    int *new_storage{nullptr};
    new_storage = new int[size];

    for(size_t i{0}; i < size; i++){
        *(new_storage + i) = int_value;
    }
    return new_storage; //returns memory location of first element of array
}

void display(const int *const array, size_t size){
    for(size_t i{0}; i < size; i++)
        cout << *(array + i) << " ";
    cout << endl;
}

int main()
{
    int *my_array{nullptr};
    size_t size;
    int int_value;

    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout << "What value would you like initialized to? ";
    cin >> int_value;

    my_array = create_array(size, int_value);
    cout << "\n-----------------------" << endl;

    display(my_array, size);
    delete [] my_array;

    return 0;
}