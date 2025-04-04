#ifndef CARAMEL_H
#define CARAMEL_H

#include "BeverageDecorator.h"

class Caramel : public BeverageDecorator {
public:
    Caramel(Beverage* bev);
    std::string getDescription() const;
    double cost() const override;
};

#endif // CARAMEL_H