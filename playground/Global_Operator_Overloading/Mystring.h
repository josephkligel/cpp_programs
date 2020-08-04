#ifndef _MYSTRING_H
#define _MYSTRING_H
#include <cstring>

class Mystring{
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);

    private:
        char *str;

    public:
        Mystring();
        Mystring(char *s);
        Mystring(const Mystring &source);
        Mystring(Mystring &&source);
        ~Mystring();

        Mystring &operator=(Mystring &rhs); //Assignment Operator
        Mystring &operator=(Mystring &&rhs); //Move Operator

        void display() const;
        int get_length() const;
        const char *get_str() const;
};

#endif