//
// Created by andrew on 09.03.18.
//

#include <cstdlib>
#include <cstdio>
#include "World.h"
#include "Pest.h"

World::World(int pestsBornPerCycleMax, Anthill *anthill) {
    this->pestsBornMaxPerCycle = pestsBornPerCycleMax;
    this->anthill = anthill;
    std::srand(1);
}

List *World::getPests() {
    return &pests;
}

void World::addPests(int count) {
    int pestsToBeBorn = rand() % (count + 1);
    for (int i = 0; i < pestsToBeBorn; i++)
        pests.add(new Pest(1));
    printf("%d pests were born\n", pestsToBeBorn);
}

void World::act() {
    addPests(pestsBornMaxPerCycle);
    Node *current = pests.getHead();
    while (current != nullptr) {
        if (!current->data->isDead())
            current->data->act(anthill);
        current = current->next;
    }
}
