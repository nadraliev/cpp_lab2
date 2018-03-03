//
// Created by andrew on 03.03.18.
//

#include "Anthill.h"

Anthill::Anthill(int foodHeap) : foodHeap(foodHeap) {
    this->foodHeap = foodHeap;
}

void Anthill::addEntity(Entity *entity) {
    entities.push_back(entity);
}

void Anthill::removeEntity(int position) {
    entities.erase(entities.begin() + position);
}

int Anthill::foodCount() {
    return foodHeap;
}

int Anthill::entitiesCount() {
    return (int) entities.size();
}

void Anthill::addFood(int count) {
    foodHeap += count;
}

void Anthill::getFood(int count) {
    foodHeap -= count;
}

void Anthill::act() {
    for (std::vector<Entity *>::size_type i = 0; i != entities.size(); i++) {
        if (entities[i]->canEat(this)) {
            entities[i]->act(this);
        } else {
            removeEntity((int) i);
            i--;
        }
    }
}


