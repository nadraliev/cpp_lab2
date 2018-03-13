//
// Created by andrew on 03.03.18.
//

#include "Policeant.h"

Policeant::Policeant(double foodPerCycle, double foodGrowthRelative) : Ant(foodPerCycle) {
    this->foodGrowthRelative = foodGrowthRelative;
}

void Policeant::act(Anthill *anthill) {
    Entity::act(anthill);
    anthill->addFood(anthill->foodCount() * foodGrowthRelative);
}
