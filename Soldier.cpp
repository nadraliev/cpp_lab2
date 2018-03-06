//
// Created by andrew on 03.03.18.
//

#include <cstdio>
#include "Soldier.h"

Soldier::Soldier(double foodPerCycle, int pestKilledPerCycle) : Entity(foodPerCycle) {
    this->pestKilledPerCycle = pestKilledPerCycle;
}

void Soldier::act(Anthill *anthill) {
    Entity::act(anthill);
    anthill->pestsCanBeKilledCount += pestKilledPerCycle;
    //killPests(anthill);
}

void Soldier::killPests(Anthill *anthill) {
    int pestsKilled = 0;
    Node *current = anthill->getEntities()->getHead();
    while (current != nullptr) {
        if (dynamic_cast<Pest *>(current->data)) {
            Node *temp = current;
            current = current->next;
            anthill->getEntities()->remove(temp->data);
            pestsKilled++;
        } else {
            current = current->next;
        }
    }
    printf("Soldier killed %d pest(s)\n", pestsKilled);
}

