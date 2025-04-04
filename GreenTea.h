#ifndef GREENTEA_H
#define GREENTEA_H

#include "Beverage.h"

class GreenTea : public Beverage {
public:
    std::string getDescription() const override;
    double cost() const override;
};

#endif // GREENTEA_H