#ifndef WHIPPEDCREAT_H
#define WHIPPEDCREAT_H

#include "BeverageDecorator.h"

class WhippedCream : public BeverageDecorator {
public:
    WhippedCream(Beverage* bev);
    
    std::string getDescription() const;
    double cost() const override;
};

#endif // WHIPPEDCREAT_H