#include "headers.h"

int main() {
    Beverage* customEspresso = new WhippedCream(new Milk(new Espresso()));
    Order* cashierOrder = OrderFactory::createOrder("cashier", customEspresso);
    std::cout << cashierOrder->processOrder() << std::endl;
    delete cashierOrder;

    PresetRegistry registry;
    Beverage* sweetLatte = registry.clonePreset("SweetLatte");
    Order* mobileOrder = OrderFactory::createOrder("mobile", sweetLatte);
    std::cout << mobileOrder->processOrder() << std::endl;
    delete mobileOrder;

    return 0;
}