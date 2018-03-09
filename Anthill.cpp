//
// Created by andrew on 03.03.18.
//

#include "Anthill.h"

Anthill::Anthill(double foodHeap) : foodHeap(foodHeap) {
    this->foodHeap = foodHeap;
    entities = new List();
}

Anthill::~Anthill() {
    Node *current = entities->getHead();
    while (current != nullptr) {
        delete current->data;
        current = current->next;
    }
}

void Anthill::addEntity(Entity *entity) {
    entities->add(entity);
}

List *Anthill::getEntites() {
    return entities;
}

double Anthill::foodCount() {
    return foodHeap;
}

int Anthill::entitiesCount() {
    return entities->getSize();
}

void Anthill::addFood(double count) {
    foodHeap += count;
}

void Anthill::getFood(double count) {
    foodHeap -= count;
}

void Anthill::act() {
    pestsCanBeKilled = 0;
    Node *current = entities->getHead();
    while (current != nullptr) {
        if (current->data->canEat(this)) {
            current->data->act(this);
            current = current->next;
        } else {
            Node *temp = current;
            current = current->next;
            entities->remove(temp->data);
        }
    }
}

void Anthill::addPestsDefence(int pestsCanBeKilled) {
    this->pestsCanBeKilled += pestsCanBeKilled;
}

void Anthill::attack(Entity *entity) {
    if (pestsCanBeKilled > 0) {
        pestsCanBeKilled--;
    } else {
        entity->eat(this);
    }
}


