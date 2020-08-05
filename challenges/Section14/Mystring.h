#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);
    friend bool operator<(const Mystring &lhs, const Mystring &rhs);
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator+=(Mystring &lhs, const Mystring &rhs);
    friend Mystring operator*(const Mystring &lhs, int n);
    friend Mystring operator*=(Mystring &lhs, int n);
    friend Mystring operator++(Mystring &lhs);
    friend Mystring operator++(Mystring &lhs, int);


private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                                                         // No-args constructor
    Mystring(const char *s);                                     // Overloaded constructor
    Mystring(const Mystring &source);                    // Copy constructor
    Mystring( Mystring &&source);                         // Move constructor
    ~Mystring();                                                     // Destructor
    
    Mystring &operator=(const Mystring &rhs);     // Copy assignment
    Mystring &operator=(Mystring &&rhs);           // Move assignment
    
    void display() const;
    
    int get_length() const;                                      // getters
    const char *get_str() const;

    // Mystring operator-() const;                                 //tolower
    // bool operator==(const Mystring &rhs) const;                  // compare operator
    // bool operator!=(const Mystring &rhs) const;                   //Non-equality
    // bool operator<(const Mystring &rhs) const;                  //Lexically-lt
    // bool operator>(const Mystring &rhs) const;                  //Lexically-gt
    // Mystring operator+(const Mystring &rhs) const;              //Concatenate
    // Mystring &operator+=(Mystring &rhs);            //Concatenation Assignment
    // Mystring operator*(int n) const;
    // Mystring &operator*=(int n);               //Multiply Assignment

};

#endif // _MYSTRING_H_