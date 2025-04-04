#include "BeverageDecorator.h"

class Milk : public BeverageDecorator {
public:
    Milk(Beverage* bev);
    
    std::string getDescription() const override;
    double cost() const override;
};