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

std::list<Entity *> *Anthill::getEntites() {
    return &entities;
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
    auto it = entities.begin();
    while (it != entities.end()) {
        if ((*it)->canEat(this)) {
            (*it)->act(this);
            ++it;
        } else {
            it = entities.erase(it);
        }
    }
}


