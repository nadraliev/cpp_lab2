//
// Created by andrew on 03.03.18.
//

#include "Anthill.h"

Anthill::Anthill(double foodHeap) : foodHeap(foodHeap) {
    this->foodHeap = foodHeap;
    entities = new List();
    killers = new List();
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

List *Anthill::getKillers() {
    return killers;
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
    Node *current = entities->getHead();
    while (current != nullptr) {
        if (current->data->canEat(this) && !current->data->isDead()) {
            current->data->act(this);
            current = current->next;
        } else {
            Node *temp = current;
            current = current->next;
            entities->remove(temp->data);
        }
    }
}


