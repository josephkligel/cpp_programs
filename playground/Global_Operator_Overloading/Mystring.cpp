#include <iostream>
#include <cstring>
#include "Mystring.h"

Mystring::Mystring()
    :str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(char *s)
    :str{nullptr} {
        if(s==nullptr){
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s) + 1];
            std::strcmp(str, s);
        }
    }

Mystring::Mystring(const Mystring &source)
    : str{nullptr}
{  
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

Mystring::Mystring(Mystring &&source)
    :str{source.str}
{
    source.str = nullptr;
}

Mystring::~Mystring(){
    delete [] str;
}

// Copy Assignment
Mystring &Mystring::operator=(Mystring &rhs)
{
    std::cout << "Copy assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete[](*this).str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
}

// Move Assignment
Mystring &Mystring::operator=(Mystring &&rhs)
{
    std::cout << "Using move assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Member Functions
void Mystring::display() const
{
    std::cout << (*this).str << std::endl;
}

int Mystring::get_length() const { return strlen(str); }
const char *Mystring::get_str() const { return str; }


// Equality
bool operator==(const Mystring &lhs, const Mystring &rhs){
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

// Make Lowercase
Mystring operator-(const Mystring &obj){
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcmp(buff, obj.str);
    for(size_t i{0}; i < std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return buff;
}

// Concatenation
Mystring operator+(const Mystring &lhs, const Mystring &rhs){
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcmp(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}