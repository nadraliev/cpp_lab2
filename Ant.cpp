//
// Created by andrew on 3/13/18.
//

#include "Ant.h"

Ant::Ant(double foodPerCycle) : Entity(foodPerCycle) {

}

void Ant::kill(Anthill *anthill, Entity *killer) {
    dead = true;
    anthill->getKillers()->add(killer);
}
