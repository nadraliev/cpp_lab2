//
// Created by andrew on 2/28/18.
//

#include "Entity.h"

Entity::Entity(double foodPerCycle) {
    this->foodPerCycle = foodPerCycle;
}

void Entity::eat(Anthill *anthill) {
    anthill->getFood(foodPerCycle);
}

bool Entity::canEat(Anthill *anthill) {
    return anthill->foodCount() >= foodPerCycle;
}

void Entity::act(Anthill *anthill) {
    eat(anthill);
}

void Entity::kill(Entity *killer) {
    dead = true;
}

bool Entity::isDead() {
    return dead;
}
