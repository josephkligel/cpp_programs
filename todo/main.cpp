#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <todolist.h>

using namespace std;

int main()
{
    pair<string, vector<string>> item("CPP", {"Todolist", "QtTodolist"});
    todolist todo(item);
    cout << todo << endl;

    pair<string, vector<string>> another_item("String", {"x", "y"});
    //todo.set_todolist(another_item);
    todo.add_item(another_item);
    cout << todo;
    return 0;
}
