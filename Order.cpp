#include "Order.h"

Order::Order(Beverage* bev, const std::string& src) : beverage(bev), source(src) {}

Order::~Order() {
    delete beverage;
}

std::string Order::processOrder() const {
    return "Order from " + source + ": " + beverage->getDescription() + " - $" + std::to_string(beverage->cost());
}