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

int Anthill::entitesCount() {
    return (int) entities.size();
}

void Anthill::act() {
    for (std::vector<Entity *>::size_type i = 0; i != entities.size(); i++) {
        if (entities[i]->canEat(&foodHeap)) {
            entities[i]->eat(&foodHeap);
            entities[i]->act(&foodHeap);
        } else {
            removeEntity((int) i);
            i--;
        }
    }
}


