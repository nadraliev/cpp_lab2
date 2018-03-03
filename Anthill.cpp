//
// Created by andrew on 03.03.18.
//

#include "Anthill.h"

Anthill::Anthill(double foodHeap) : foodHeap(foodHeap) {
    this->foodHeap = foodHeap;
}

void Anthill::addEntity(Entity *entity) {
    entities.push_back(entity);
}

std::list<Entity *> *Anthill::getEntites() {
    return &entities;
}

double Anthill::foodCount() {
    return foodHeap;
}

int Anthill::entitiesCount() {
    return (int) entities.size();
}

void Anthill::addFood(double count) {
    foodHeap += count;
}

void Anthill::getFood(double count) {
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


