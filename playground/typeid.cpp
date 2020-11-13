#include <iostream>
#include <cstdio>
#include <typeinfo>
#include <string>
using namespace std;

struct A {int x; };
struct B {int x; };

A a1;
B b1;

int main(){
	printf("type is %s\n", typeid(std::string).name());
	if(typeid(a1) == typeid(A)){
		puts("same");
	} else {
		puts("different");
	}

	return 0;
}
