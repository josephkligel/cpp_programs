#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    std::vector<int> vec {1, 2, 3, 4};
    std::for_each(vec.begin(), vec.end(), 
        [](int x) {std::cout << x * x << " "; } );

    return 0;
}