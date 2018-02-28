//
// Created by andrew on 2/28/18.
//

#include "Entity.h"

Entity::Entity(int foodPerCycle) {
    this->foodPerCycle = foodPerCycle;
}

void Entity::eat(int *foodHeap) {
    *foodHeap -= foodPerCycle;
}

bool Entity::canEat(int *foodHeap) {
    return *foodHeap >= foodPerCycle;
}

void Entity::act(int *foodHeap) {
    eat(foodHeap);
}
