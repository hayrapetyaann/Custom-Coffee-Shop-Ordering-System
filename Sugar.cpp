#include "Sugar.h"

Sugar::Sugar(Beverage* bev) : BeverageDecorator(bev) {}

std::string Sugar::getDescription() const {
    return beverage->getDescription() + ", Sugar";
}

double Sugar::cost() const {
    return beverage->cost() + 1.0;
}
