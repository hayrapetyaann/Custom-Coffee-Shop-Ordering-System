#ifndef SUGAR_H
#define SUGAR_H

#include "BeverageDecorator.h"

class Sugar : public BeverageDecorator {
public:
    Sugar(Beverage* bev);
    std::string getDescription() const override;
    double cost() const override;
};

#endif // SUGAR_H