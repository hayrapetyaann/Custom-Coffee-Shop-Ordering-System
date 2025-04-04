#ifndef ORDER_FACTORY_H
#define ORDER_FACTORY_H

#include <iostream>

#include "Beverage.h"
#include "Order.h"
#include "MobileOrder.h"
#include "CashierOrder.h"

class OrderFactory {
public:
    static Order* createOrder(const std::string& source, Beverage* beverage);
};

#endif // ORDER_FACTORY_H