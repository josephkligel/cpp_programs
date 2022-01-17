#include "todolist.h"
#include <iostream>
#include <utility>
#include <vector>
#include <string>
using namespace std;

// Constructors
todolist::todolist(std::pair<std::string, std::vector<string>> item)
{
    //cout << "Creating todolist" << endl;
    this->list.insert(item);
}

todolist::~todolist()
{
    cout << "Destroying todolist" << endl;
}

// Get list
auto todolist::get_list(){
    return this->list;
}

// Add, remove, and edit item methods
void todolist::add_item(std::pair<std::string, std::vector<string>> item){
    this->list.insert(item);
}


// Overloaded operators
ostream& operator<<(ostream &os, todolist &todo){
    for(const auto &item: todo.get_todolist()){
        os << item.first << endl;
        for(const auto &sub_item: item.second){
            os << "\t-> " << sub_item << endl;
        }
    }
    return os;
}
