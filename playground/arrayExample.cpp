#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>

int main(){
    std::array<int, 5> arr1 = {2, 1, 10, 5, 6};
    std::sort(arr1.begin(), arr1.end());
    std::cout << "\n==============================\n";
    for(auto i: arr1) std::cout << i << std::endl;

    std::array<int, 5>::iterator min_num = std::min_element(arr1.begin(), arr1.end());
    auto max_num = std::max_element(arr1.begin(), arr1.end());
    std::cout << "min: " << *min_num << " max: " << *max_num << std::endl;

    std::vector<int> vec1 {1, 2, 3, 4};
    std::vector<int> vec2 {10, 20, 30, 40, 50};
    std::copy_if(vec1.begin(), vec1.end(), std::back_inserter(vec2), [](int x){ return x < 3; } );
    std::cout << "\n====================" << std::endl;
    for(auto i: vec2) std::cout << i << " ";
    std::cout << std::endl;

    std::vector<int> vec3 {};
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), std::back_inserter(vec3), [](int x, int y){ return x*y ;} );

    for(auto i: vec3) std::cout << i << " ";
    std::cout << std::endl;

    std::string str1 {"hello world"};
    std::transform(str1.begin(), str1.end(), str1.begin()+5, ::toupper);
    std::cout << str1 << std::endl;

    return 0;
}