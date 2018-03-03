//
// Created by andrew on 03.03.18.
//

#ifndef CPP_LAB2_ANTHILL_H
#define CPP_LAB2_ANTHILL_H

#include <list>
#include "Entity.h"

class Entity;

class Anthill {

public:
    Anthill(double foodHeap);

    void addEntity(Entity *entity);

    std::list<Entity *> *getEntites();

    void act();

    double foodCount();

    int entitiesCount();

    void addFood(double count);

    void getFood(double count);

private:
    double foodHeap;
    std::list<Entity *> entities;

};


#endif //CPP_LAB2_ANTHILL_H
