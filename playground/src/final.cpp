#include <iostream>

class A{
    public:
        virtual void do_something() final;
};

class B: public A{
};

int main(){
    A a {};
    B b {};
    b.do_something();

    return 0;
}