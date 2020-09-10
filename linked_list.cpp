#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Element{
	public:
		string information {""};
		Element *link;

		bool has_next(){return (link != nullptr); }
		string get_next(){ return (link==nullptr ? "No next" : link->information); }
		void assign_next(Element *elem){link = elem; }
		
		// Element(string info, Element *link=nullptr):information{info},link{link}{ cout << "Element constructor" << std::endl;}
		
};

void assign_next_elements(vector<Element *> linked_list){
	for(size_t i{}; i < (linked_list.size() - 1); i++){
		linked_list[i]->assign_next(linked_list[i+1]);
	}
}

void print_elements(vector<Element *> linked_list){
	for(auto element: linked_list){
		cout << "\nCurrent: " << element->information << endl;
		cout << "Next: " << element->get_next() << endl;
	}
}

int main(){
	Element e0 {"First Element"};
	Element e1 {"Second Element"};
	Element e2 {"Third Element"};

	vector<Element *> linked_list {&e0, &e1, &e2};
	assign_next_elements(linked_list);

	print_elements(linked_list);

	return 0;
}