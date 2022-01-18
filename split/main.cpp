#include <iostream>
#include <string>
#include "split.hpp"
#include "print.hpp"
using namespace std;

int main(){
	string str = "this>;that>;where>;somewhere>";
	string delim = ">;";

	print_vec(split(str, delim));

	return 0;
}
