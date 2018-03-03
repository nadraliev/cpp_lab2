//
// Created by andrew on 03.03.18.
//

#include "Soldier.h"
#include "Pest.h"

Soldier::Soldier(int foodPerCycle, int pestKilledPerCycle) : Entity(foodPerCycle) {
    this->pestKilledPerCycle = pestKilledPerCycle;
}

void Soldier::act(Anthill *anthill) {
    Entity::act(anthill);
    killPests(anthill);
}

void Soldier::killPests(Anthill *anthill) {
    int pestsKilled = 0;
    auto it = anthill->getEntites()->begin();
    while (it != anthill->getEntites()->end() && pestsKilled < pestKilledPerCycle) {
        if (dynamic_cast<Pest *>(*it)) {
            it = anthill->getEntites()->erase(it);
            pestsKilled++;
        } else {
            ++it;
        }
    }
}

