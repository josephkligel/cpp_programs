#include <iostream>
using namespace std;

class Shape{ //Abstract
    public:
        virtual void draw() = 0;
        virtual void rotate() = 0;
        virtual ~Shape();
};

class Open_Shape: public Shape{ //Abstract
    public:
        virtual ~Open_Shape(){}
};

class Closed_Shape: public Shape{ //Abstract
    public:
        virtual ~Closed_Shape(){}
};

class Line: public Open_Shape{ //Concrete
    public:
        virtual void draw() override{
            std::cout << "Drawing a line" << std::endl;
        }
        virtual void rotate() override{
            std::cout << "Rotating a line" << std::endl;
        }
        virtual ~Line(){}
};

class Circle: public Closed_Shape{
    public:
        virtual void draw() override{
            std::cout << "Drawing a circle" << std::endl;
        }
        virtual void rotate() override{
            std::cout << "Drawing a circle" << std::endl;
        }
        virtual ~Circle();
};

int main(){
    Circle c {};
    c.draw();

    return 0;
}