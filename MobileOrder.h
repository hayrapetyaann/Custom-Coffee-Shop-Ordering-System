#ifndef MOBILEORDER_H
#define MOBILEORDER_H

#include "Order.h"
#include "Beverage.h"

class MobileOrder : public Order {
public:
    explicit MobileOrder(Beverage* bev);
};

#endif // MOBILEORDER_H