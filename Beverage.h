#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>

class Beverage {
public:
    virtual ~Beverage() {}
    virtual std::string getDescription() const = 0;
    virtual double cost() const = 0;
};

#endif // BEVERAGE_H