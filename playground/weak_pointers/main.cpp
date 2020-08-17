#include <iostream>
#include <memory>
using namespace std;

class B;

class A{
	std::shared_ptr<B> b_ptr;
	public:
		void set_B(std::shared_ptr<B> &b){
			b_ptr = b;
		}
		A(){ cout << "A constructor" << endl; }
		~A(){ cout << "A destructor" << endl; }
};

class B{
	std::weak_ptr<A> a_ptr;
	public:
		void set_A(std::shared_ptr<A> &a){
			a_ptr = a;
		}
		B(){cout << "B constructor" << endl;}
		~B(){cout << "B destructor" << endl;}
};

void my_deleter(A *ptr){
	std::cout << "\nUsing my custom delete function" << std::endl;
	delete ptr;
}

int main(){
	std::shared_ptr<A> a = make_shared<A>();
	std::shared_ptr<B> b = make_shared<B>();
	a->set_B(b);
	b->set_A(a);

	std::cout << "\n======================" << std::endl;
	std::shared_ptr<A> a_ptr { new A{}, my_deleter };
	std::shared_ptr<B> b_ptr ( new B{}, [] (B *ptr){
		std::cout << "My custom lambda delete function" << std::endl;
		delete ptr;
	} );

	return 0;
}