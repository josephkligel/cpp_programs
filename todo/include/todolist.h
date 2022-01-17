#ifndef TODOLIST_H
#define TODOLIST_H
#include <map>
#include <string>
#include <vector>
#include <utility>
using namespace std;

class todolist
{
    public:
        todolist(pair<string, vector<string>> item);
        virtual ~todolist();

        auto get_list();

        void add_item(pair<string, vector<string>> item);
        void remove_item(string item);
        void edit_item(string item);

        friend ostream& operator<<(ostream &os, todolist &todo);

    protected:

    private:
        map<string, vector<string>> list;

};

#endif // TODOLIST_H
