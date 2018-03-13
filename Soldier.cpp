//
// Created by andrew on 03.03.18.
//

#include <cstdio>
#include "Soldier.h"

Soldier::Soldier(double foodPerCycle, int pestKilledPerCycle) : Ant(foodPerCycle) {
    this->pestKilledPerCycle = pestKilledPerCycle;
}

void Soldier::act(Anthill *anthill) {
    Entity::act(anthill);
    killPests(anthill);
}

void Soldier::killPests(Anthill *anthill) {
    int pestsKilled = 0;
    Node *current = anthill->getKillers()->getHead();
    while (current != nullptr) {
        if (!current->data->isDead() && pestsKilled < pestKilledPerCycle) {
            current->data->kill(this);
            pestsKilled++;
        }
        current = current->next;
    }
    printf("Soldier killed %d pest(s)\n", pestsKilled);
}

