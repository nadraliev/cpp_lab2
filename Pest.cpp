//
// Created by andrew on 03.03.18.
//

#include <cstdio>
#include "Pest.h"
#include "Ant.h"

Pest::Pest(int antsKilledPerCycle) {
    this->antsKillesPerCycle = antsKilledPerCycle;
}

void Pest::act(Anthill *anthill) {
    int antsKilled = 0;
    Node *current = anthill->getEntites()->getHead();
    while (current != nullptr) {
        if (!current->data->isDead() && antsKilled < antsKillesPerCycle) {
            ((Ant *) (current->data))->kill(anthill, this);
            antsKilled++;
        }
        current = current->next;
    }
    printf("Pest killed %d ants\n", antsKilled);
}
