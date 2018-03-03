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
    Anthill(int foodHeap);

    void addEntity(Entity *entity);

    std::list<Entity *> *getEntites();

    void act();

    int foodCount();

    int entitiesCount();

    void addFood(int count);

    void getFood(int count);

private:
    int foodHeap;
    std::list<Entity *> entities;

};


#endif //CPP_LAB2_ANTHILL_H
