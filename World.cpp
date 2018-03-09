//
// Created by andrew on 09.03.18.
//

#include "World.h"
#include "Pest.h"

World::World(int pestsCount, Anthill *anthill) {
    this->pestsBornPerCycle = pestsBornPerCycle;
    this->anthill = anthill;
    addPests(pestsCount);
}

List *World::getPests() {
    return &pests;
}

void World::addPests(int count) {
    for (int i = 0; i < count; i++)
        pests.add(new Pest(1));
}

void World::act() {
    Node *current = pests.getHead();
    while (current != nullptr) {
        current->data->act(anthill);
        current = current->next;
    }
}
