#include "Caramel.h"

Caramel::Caramel(Beverage* bev) : BeverageDecorator(bev) {}

std::string Caramel::getDescription() const {
    return beverage->getDescription() + ", Caramel";
}

double Caramel::cost() const {
    return beverage->cost() + 2.5;
}