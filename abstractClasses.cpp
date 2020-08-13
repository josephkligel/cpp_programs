#include <iostream>
#include <vector>
using namespace std;

class Shape{ //Abstract
    public:
        virtual void draw() = 0;
        virtual void rotate() = 0;
        virtual ~Shape(){}
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

class Circle: public Closed_Shape{ //Concrete
    public:
        virtual void draw() override{
            std::cout << "Drawing a circle" << std::endl;
        }
        virtual void rotate() override{
            std::cout << "Rotating a circle" << std::endl;
        }
        virtual ~Circle(){}
};

void screen_refresh(const std::vector<Shape *> &shapes){
    std::cout << "Refreshing" << std::endl;
    for(const auto p: shapes)
        p->draw();
}

int main(){
    // Circle c;
    // c.draw();

    // Shape *ptr = new Circle();
    // ptr->draw();
    // ptr->rotate();

    Shape *s1 = new Circle();
    Shape *s2 = new Line();

    std::vector<Shape *>
    shapes {s1, s2};
    // for(const auto p: shapes)
    //     p->draw();
    screen_refresh(shapes);

    delete s1;
    delete s2;

    return 0;
}