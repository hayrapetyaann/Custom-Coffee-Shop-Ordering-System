#ifndef ESPRESSO_H
#define ESPRESSO_H

#include "Beverage.h"

class Espresso : public Beverage {
public:
    std::string getDescription() const override;
    double cost() const override;
};

#endif // ESPRESSO_H
