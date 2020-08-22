#ifndef _INSUFFICIENTFUNDEXCEPTION_H
#define _INSUFFICIENTFUNDEXCEPTION_H
#include <iostream>

class InsufficientFundException: public std::exception {
    public:
        InsufficientFundException(){}
        ~InsufficientFundException(){}

        virtual const char* what() const noexcept {
            return "Sorry, cannot withdraw due to insufficient funds";
        }
};

#endif