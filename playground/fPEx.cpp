#include <iostream>
#include <cstdio>
using namespace std;

void func(){
	puts("this is func()");
}

int main(){
	void(*pfunc)() = func;
	puts("this is main()");
	pfunc();
	return 0;
}
