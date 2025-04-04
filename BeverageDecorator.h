#ifndef BEVERAGEDECORATOR_H
#define BEVERAGEDECORATOR_H

#include "Beverage.h"

class BeverageDecorator : public Beverage {
protected:
    Beverage* beverage;
    
public:
    BeverageDecorator(Beverage* bev);
    virtual ~BeverageDecorator();
};

#endif // BEVERAGEDECORATOR_H