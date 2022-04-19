//
// Created by Alexandru-Paul Sirbu on 19.04.2022.
//

#ifndef SEMINAR05_BEVERAGE_H
#define SEMINAR05_BEVERAGE_H

#include <string>
#include <iostream>

using std::string;

class Beverage {
    string description;
public:
    Beverage(const string &desc) : description{desc} {};
    Beverage()=default;

    virtual double price() { return 150; }

    void print() {
        std::cout << description<<" for $"<<std::to_string(this->price());
    }

};


#endif //SEMINAR05_BEVERAGE_H
