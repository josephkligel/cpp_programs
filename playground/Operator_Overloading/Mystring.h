#ifndef _MYSTRING_H
#define _MYSTRING_H
#include <iostream>
#include <cstring>

class Mystring{
    private:
        char *str;
        
    public:
        // void set_name(char *s){*str = *s; }
        void display() const;
        int get_length() const;
        const char *get_str() const;

        Mystring();
        Mystring(const char *s);
        Mystring(const Mystring &source);
        ~Mystring();

        Mystring &operator=(const Mystring &rhs); // Copy assignment

};

#endif