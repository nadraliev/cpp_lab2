//
// Created by andrew on 03.03.18.
//

#include <cstdio>
#include "Female.h"
#include "Worker.h"
#include "Policeant.h"
#include "Soldier.h"

Female::Female(double foodPerCycle, int larvasBornPerCycle, Anthill *anthill) : Ant(foodPerCycle) {
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
            current->data = giveBirthToNewEntity();
        }
        current = current->next;
    }
}


Entity *Female::giveBirthToNewEntity() {
    Entity *entity = nullptr;
    int policeantsCount = 0;
    int soldiersCount = 0;
    int workersCount = 0;
    Node *current = anthill->getEntites()->getHead();
    while (current != nullptr) {
        if (dynamic_cast<Policeant *>(current->data))
            policeantsCount++;
        if (dynamic_cast<Soldier *>(current->data))
            soldiersCount++;
        if (dynamic_cast<Worker *>(current->data))
            workersCount++;
        current = current->next;
    }
    int min = std::min(std::min(policeantsCount, soldiersCount), workersCount);
    if (min == policeantsCount) {
        entity = new Policeant(1, 0.3);
        printf("Larva evolved into policeant\n");
    } else if (min == soldiersCount) {
        entity = new Soldier(1, 1);
        printf("Larva evolved into soldier\n");
    } else {
        entity = new Worker(1, 2);
        printf("Larva evolved into worker\n");
    }
    return entity;
}
