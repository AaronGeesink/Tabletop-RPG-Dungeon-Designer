#ifndef LOOT_ENCOUNTER_HPP
#define LOOT_ENCOUNTER_HPP

#include <vector>
#include <utility>
#include "./loot.hpp"
#include "./encounter.hpp"

class LootEncounter : public Encounter
{
private:
    std::vector<std::pair<Loot, int>> items;
public:
    LootEncounter();
    LootEncounter(std::vector<std::pair<Loot, int>> items);
    ~LootEncounter();
    std::string getEncounter();
    Encounter* clone();
};

#endif // LOOT_ENCOUNTER_HPP