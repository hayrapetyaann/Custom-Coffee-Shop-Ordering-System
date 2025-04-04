#ifndef LATTE_H
#define LATTE_H

#include "Beverage.h"

class Latte : public Beverage {
public:
    std::string getDescription() const override;
    double cost() const override;
};

#endif // LATTE_H