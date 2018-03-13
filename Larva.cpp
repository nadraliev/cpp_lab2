//
// Created by andrew on 2/28/18.
//

#include <cstdio>
#include "Larva.h"

Larva::Larva(double foodPerCycle, double foodRequiredToGrow, std::function<void(Larva *)> onLarvaCanGrow) : Ant(
        foodPerCycle) {
    this->foodRequiredToGrow = foodRequiredToGrow;
    this->onLarvaCanGrow = onLarvaCanGrow;
}

void Larva::act(Anthill *anthill) {
    Entity::act(anthill);
    foodRequiredToGrow -= foodPerCycle;
    if (foodRequiredToGrow <= 0) {
        printf("Larva is ready to grow\n");
        onLarvaCanGrow(this);
    }
}
