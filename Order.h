#ifndef ORDER_H
#define ORDER_H

#include "Beverage.h"

class Order {
protected:
    Beverage* beverage;
    std::string source;
public:
    Order(Beverage* bev, const std::string& src);
    virtual ~Order();
    virtual std::string processOrder() const;
};

#endif // ORDER_H