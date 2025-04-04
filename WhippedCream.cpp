#include "WhippedCream.h"

WhippedCream::WhippedCream(Beverage* bev) : BeverageDecorator(bev) {}

std::string WhippedCream::getDescription() const {
    return beverage->getDescription() + ", WhippedCream";
}

double WhippedCream::cost() const {
    return beverage->cost() + 1.2;
}
