#ifndef PRESETREGISTRY_H
#define PRESETREGISTRY_H

#include <map>
#include <string>
#include "Beverage.h"

class PresetRegistry {
private:
    std::map<std::string, Beverage*> presets;
public:
    PresetRegistry();
    ~PresetRegistry();
    Beverage* clonePreset(const std::string& name);
};

#endif // PRESETREGISTRY_H