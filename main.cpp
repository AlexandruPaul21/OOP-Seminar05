#include <iostream>
#include "beverage.h"
#include "coffee.h"
#include "beverageWithMilk.h"

class A {
public:
    A() {
        std::cout << "A()";
    }

    virtual void f() {
        std::cout << "f din A";
    }
};

class B : public A {
public:
    B() {
        std::cout << "B()";
    }

    void f() override {
        std::cout << "f din B";
    }
};

int main() {
    A *a = new B();

    std::cout << std::endl;
    a->f();
    delete a;
    //    Coffee* c=new Coffee();
//    c->print();
//    BeverageWithMilk* b=new BeverageWithMilk(c, 10);
//    std::cout << std::endl;
//    b->print();
//    std::cout << std::endl;
//    std::cout << "Hello, World!" << std::endl;
//    delete c;
//    delete b;
    return 0;
}
