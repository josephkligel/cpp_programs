#ifndef _TEMPLATE_HPP
#define _TEMPLATE_HPP
#include <sstream>
#include <string>
using namespace std;

stringstream create_standard_cpp();

stringstream create_header(const string filename, string ext);

void create_template(string filename, string type);

#endif
