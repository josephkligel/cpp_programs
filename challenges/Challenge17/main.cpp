#include <iostream>
#include <vector>
#include <memory>

class Test{
    private:
        int data;
    public:
        Test():data{0}{ std::cout << "\tTest constructor (" << data << ")" << std::endl; }
        Test(int data):data{data}{std::cout << "\tTest constructor (" << data << ")" << std::endl;}
        int get_data()const{return data;}
        ~Test(){std::cout << "\tTest destructor (" << data << ")" << std::endl;}
};

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();
void fill(std::vector<std::shared_ptr<Test>> &vec, int num);
void display(std::vector<std::shared_ptr<Test>> &vec);

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make(){
    return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

void fill(std::vector<std::shared_ptr<Test>> &vec, int num){
    for(int i{1}; i <= num; ++i){
        int input;
        std::cout << "Enter for data[" << i << "]: ";
        std::cin >> input;
        std::shared_ptr<Test> new_shared = std::make_shared<Test>(input);
        vec.push_back(new_shared);
    }
}

void display(std::vector<std::shared_ptr<Test>> &vec){
    std::cout << "========== Displaying Data ==========" << std::endl;
    for(auto const ptr: vec){
        std::cout << ptr->get_data() << std::endl;
    }
    std::cout << "=====================================" << std::endl;
}

int main(){
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    std::cout << "How many data points do you want to enter: ";
    int num;
    std::cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);

    return 0;
}