#include "BeverageDecorator.h"

BeverageDecorator::BeverageDecorator(Beverage* bev) : beverage(bev) {}

BeverageDecorator::~BeverageDecorator() {
    delete beverage;
}