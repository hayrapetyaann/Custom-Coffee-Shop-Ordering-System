#include "OrderFactory.h"

Order* OrderFactory::createOrder(const std::string& source, Beverage* beverage) {
    if (source == "cashier") {
        return new CashierOrder(beverage);
    }

    if (source == "mobile") {
        return new MobileOrder(beverage);
    }
    
    return nullptr; 
}