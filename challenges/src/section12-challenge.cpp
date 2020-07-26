#include <iostream>
using namespace std;

void print(const int *const array, size_t array_size){
    for(size_t i{0}; i < array_size; i++)
        cout << *(array + i) << " ";
    
    cout << endl;
}

int *apply_all(int *array1, size_t array1_size, int *array2, size_t array2_size){
    int *results {};

    results = new int[array2_size * array1_size];

    int position{0};
    for(size_t j{0}; j < array2_size; j++){
        for (size_t i{0}; i < array1_size; i++){
            results[position] = array2[j] * array1[i];
            position++;
        }
    }
    
    return results;
}

int main()
{
    int array1[] {1, 2, 3, 4, 5};
    int array2[] {10, 20, 30};

    const size_t array1_size {5};
    const size_t array2_size {3};

    cout << "Array1: ";
    print(array1, array1_size);

    cout << "Array2: ";
    print(array2, array2_size);

    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size*array2_size};

    cout << "Result: ";
    print(results, results_size);

    cout << endl;

    return 0;
}
