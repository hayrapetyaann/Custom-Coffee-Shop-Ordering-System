#ifndef CASHIERORDER_H
#define CASHIERORDER_H

#include "Beverage.h"
#include "Order.h"

class CashierOrder : public Order {
public:
    explicit CashierOrder(Beverage* bev);
};

#endif // CASHIERORDER_H