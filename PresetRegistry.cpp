#include "PresetRegistry.h"
#include "BeverageDecorator.h"
#include "Sugar.h"
#include "GreenTea.h"
#include "Milk.h"
#include "Latte.h"
#include "Caramel.h"

PresetRegistry::PresetRegistry() {
    presets["SweetLatte"] = new Sugar(new Milk(new Latte()));
    presets["SweetGreenTea"] = new Sugar(new GreenTea());
}

PresetRegistry::~PresetRegistry() {
    for (auto& pair : presets) {
        delete pair.second;
    }
}

Beverage* PresetRegistry::clonePreset(const std::string& name) {
    auto it = presets.find(name);
    if (it != presets.end()) {
        if (name == "SweetLatte") {
            return new Sugar(new Milk(new Latte()));
        }

        if (name == "CaramelGreenTea") {
            return new Caramel(new GreenTea());
        }
    }
    return nullptr;
}