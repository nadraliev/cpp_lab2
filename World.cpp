//
// Created by andrew on 3/6/18.
//

#include "World.h"

World::World(int pestsCount) {
    for (int i = 0; i < pestsCount; i++) {
        Pest pest(1);
        getPests()->add(&pest);
    }
}

Anthill *World::getAnthill() {
    return anthill;
}

void World::setAnthill(Anthill *anthill) {
    this->anthill = anthill;
}

List *World::getPests() {
    return pests;
}

void World::act() {
    Node *current = getPests()->getHead();
    while (current != nullptr) {
        getAnthill()->attack((Pest *) current->data);
        current = current->next;
    }
}
