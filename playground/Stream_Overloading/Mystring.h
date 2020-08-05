#ifndef _MYSTRING_H
#define _MYSTRING_H

class Mystring{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);   

    private:
        char *str;

    public:
        Mystring();
        Mystring(const char *s);
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