//
// Created by andrew on 03.03.18.
//

#include <cstdio>
#include "Female.h"
#include "Worker.h"

Female::Female(double foodPerCycle, int larvasBornPerCycle, Anthill *anthill) : Entity(foodPerCycle) {
    this->larvasBornPerCycle = larvasBornPerCycle;
    this->anthill = anthill;
}

void Female::act(Anthill *anthill) {
    Entity::act(anthill);
    std::function<void(Larva *)> func = [this](Larva *larva) {
        onLarvaReadyToGrow(larva);
    };
    for (int i = 0; i < larvasBornPerCycle; i++) {
        anthill->addEntity(new Larva(5, 10, func));
    }
}

void Female::onLarvaReadyToGrow(Larva *larva) {
    Node *current = anthill->getEntites()->getHead();
    while (current != nullptr) {
        if (current->data == larva) {
            current->data = new Worker(1, 2);
        }
        current = current->next;
    }
    printf("Larva evolved into worker\n");
}
