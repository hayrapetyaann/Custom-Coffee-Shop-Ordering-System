#include "Milk.h"

Milk::Milk(Beverage* bev) : BeverageDecorator(bev) {}

std::string Milk::getDescription() const {
    return beverage->getDescription() + ", Milk";
}

double Milk::cost() const {
    return beverage->cost() + 1.5;
}