//
// Created by andrew on 2/28/18.
//

#include "Worker.h"

Worker::Worker(double foodPerCycle, double foodMinedPerCycle) : Ant(foodPerCycle) {
    this->foodMinedPerCycle = foodMinedPerCycle;
}

void Worker::act(Anthill *anthill) {
    Entity::act(anthill);
    mineFood(anthill);
}

void Worker::mineFood(Anthill *anthill) {
    anthill->addFood(foodMinedPerCycle);
}