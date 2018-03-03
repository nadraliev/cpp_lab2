//
// Created by andrew on 03.03.18.
//

#include "Soldier.h"

Soldier::Soldier(int foodPerCycle, int pestKilledPerCycle) : Entity(foodPerCycle) {
    this->pestKilledPerCycle = pestKilledPerCycle;
}

void Soldier::act(Anthill *anthill) {
    Entity::act(anthill);
    killPests(anthill);
}

void Soldier::killPests(Anthill *anthill) {
    int pestsKilled = 0;
}

