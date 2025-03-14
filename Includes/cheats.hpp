#ifndef CHEATS_H
#define CHEATS_H

#include <CTRPluginFramework.hpp>
#include "Helpers.hpp"
#include "Unicode.h"

namespace CTRPluginFramework
{
    using StringVector = std::vector<std::string>;
    void dropEverything(MenuEntry *entry);
    void ninetyFov(MenuEntry *entry);
    void defaultCodes(MenuEntry *entry);
    void removeMobCap(MenuEntry *entry);
    void itemLimit(MenuEntry *entry);
    void enhancedParticles(MenuEntry *entry);
    void betterMinecartPhysics(MenuEntry *entry);
    void stopMobSpawns(MenuEntry *entry);
}
#endif
