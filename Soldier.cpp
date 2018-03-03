//
// Created by andrew on 03.03.18.
//

#include <cstdio>
#include "Soldier.h"
#include "Pest.h"

Soldier::Soldier(double foodPerCycle, int pestKilledPerCycle) : Entity(foodPerCycle) {
    this->pestKilledPerCycle = pestKilledPerCycle;
}

void Soldier::act(Anthill *anthill) {
    Entity::act(anthill);
    killPests(anthill);
}

void Soldier::killPests(Anthill *anthill) {
    int pestsKilled = 0;
    Node *current = anthill->getEntites()->getHead();
    while (current != nullptr) {
        if (dynamic_cast<Pest *>(current->data)) {
            Node *temp = current;
            current = current->next;
            anthill->getEntites()->remove(temp->data);
            pestsKilled++;
        } else {
            current = current->next;
        }
    }
    printf("Soldier killed %d pest(s)\n", pestsKilled);
}

